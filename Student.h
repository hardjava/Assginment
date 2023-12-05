#pragma once

#include <iostream>
#include "Donator.h"

using namespace std;

class Student : public Donator {
public:
    Student(const string &, const string &, int, const string &, const string &);

    const string &getKey() const;

    const string toString() const;

private:
    string studentId;
    string major;
};