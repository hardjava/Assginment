#include "Donator.h"

Donator::Donator(const string &newName, const string &newPhoneNumber, int newTotalAmount) :
        name(newName), phoneNumber(newPhoneNumber), totalAmount(newTotalAmount) {}

bool Donator::operator<(Donator *p) const {
    return totalAmount < p->totalAmount;
}

bool Donator::operator==(Donator *p) const {
    return totalAmount == p->totalAmount;
}

const string &Donator::getName() const {
    return name;
}

const string &Donator::getPhoneNumber() const {
    return phoneNumber;
}

int Donator::getTotalAmount() const {
    return totalAmount;
}