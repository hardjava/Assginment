#pragma once

#include <iostream>

using namespace std;

class Donator {
public:
    Donator(const string &, const string &, int);

    bool operator<(Donator *) const;

    bool operator==(Donator *) const;

    virtual const string toString() const {}

    virtual const string &getKey() const {}

    const string &getName() const;

    const string &getPhoneNumber() const;

    int getTotalAmount() const;

private:
    string name;
    string phoneNumber;
    int totalAmount;
};