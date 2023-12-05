#pragma once

#include <iostream>
#include "DonatorLinkedList.h"
#include "Student.h"
#include "GDonor.h"
#include "Faculty.h"

using namespace std;

class DonatorApp {
public:
    DonatorApp(char *);

    void run();

private:
    DonatorLinkedList *list;

    string fileName;

    DonatorLinkedList *readFile() const;

    void insertNew() const;

    void insertToList(DonatorLinkedList *, const string &) const;

    void viewAll() const;

    int getCommand() const;
};