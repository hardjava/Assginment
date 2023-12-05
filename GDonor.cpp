#include <iostream>
#include <sstream>
#include <iomanip>
#include "GDonor.h"

using namespace std;

GDonor::GDonor(const string &newName, const string &newPhoneNumber, int newTotalAmount, const string &newDepositorId)
        : Donator(newName, newPhoneNumber, newTotalAmount), depositorId(newDepositorId) {
    setKey();
}

void GDonor::setKey() {
    ostringstream formatter;
    formatter << setw(5) << setfill('0') << ++num;
    key = "D" + formatter.str();
}

const string &GDonor::getKey() const {
    return key;
}

const string GDonor::toString() const {
    return "[GDonor] " + getName() + "(" + depositorId + ") " + getPhoneNumber() + " $" + to_string(getTotalAmount());
}

int GDonor::num = 0;