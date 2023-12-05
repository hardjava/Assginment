#include <iostream>
#include <cassert>
#include <fstream>
#include <sstream>
#include "DonatorApp.h"

using namespace std;

DonatorApp::DonatorApp(char *argv) : fileName(argv) {
    list = readFile();
}

void DonatorApp::run() {
    cout << "*********************************************" << endl;
    cout << "--------- Deposit Status ---------" << endl;
    viewAll();

    bool endFlag = false;

    while (!endFlag) {
        int command = getCommand();

        switch (command) {
            case 1:
                viewAll();
                break;
            case 2:
                insertNew();
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                endFlag = true;
                break;
            default:
                cout << "Please Select (1) ~ (5)" << endl;
                break;
        }
    }
    cout << "Terminated .. " << endl;
}

DonatorLinkedList *DonatorApp::readFile() const {
    ifstream inStream;

    inStream.open(fileName);
    if (!inStream.is_open()) {
        cout << "Can't Open File" << endl;
        assert(false);
    }

    DonatorLinkedList *newList = new DonatorLinkedList;
    string line;
    while (getline(inStream, line)) {
        insertToList(newList, line);
    }

    return newList;
}

void DonatorApp::insertNew() const {
    stringstream ss;
    cout << "Input: ";
    string input;
    cin >> input;

    if (list->isPossibleToInsert(input)) {
        insertToList(list, input);
    }
}

void DonatorApp::insertToList(DonatorLinkedList *newList, const string &str) const {
    stringstream ss;
    string type, newName, newPhoneNumber;
    int totalAmount;

    ss.clear();
    ss.str("");
    ss.str(str);
    ss >> type;

    Donator *donator;
    if (type == "Student") {
        string newMajor, newStudentId;
        ss >> newStudentId >> newName >> newMajor >> newPhoneNumber >> totalAmount;
        donator = new Student(newName, newPhoneNumber, totalAmount, newStudentId, newMajor);
        newList->addDonator(donator);
    } else if (type == "GDonor") {
        string newDepositorId;
        ss >> newDepositorId >> newName >> newPhoneNumber >> totalAmount;
        donator = new GDonor(newName, newPhoneNumber, totalAmount, newDepositorId);
        newList->addDonator(donator);
    } else if (type == "Faculty") {
        string newEmployeeId, newDepartment, newExtensionNumber;
        ss >> newEmployeeId >> newName >> newDepartment >> newExtensionNumber >> newPhoneNumber >> totalAmount;
        donator = new Faculty(newName, newPhoneNumber, totalAmount, newEmployeeId, newDepartment,
                              newExtensionNumber);
        newList->addDonator(donator);
    } else {
        cout << "Wrong Input.." << endl;
    }
}

void DonatorApp::viewAll() const {
    list->printDescending();
}

int DonatorApp::getCommand() const {
    int enter;

    cout << "[1] View all / [2] Insert New / [3] Deposit / [4] Delete / [5] Exit : ";
    cin >> enter;

    return enter;
}