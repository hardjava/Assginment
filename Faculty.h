#pragma once

#include <iostream>
#include "Donator.h"

using namespace std;

class Faculty : public Donator {
public:
    Faculty(const string &, const string &, int, const string &, const string &, const string &);

    const string toString() const;

    const string &getKey() const;

private:
    string employeeId;
    string department;
    string extensionNumber;
};