#pragma once

#include <iostream>
#include "Donator.h"

using namespace std;

class GDonor : public Donator {
public:
    GDonor(const string &, const string &, int, const string &);

    const string &getKey() const;

    const string toString() const;

private:
    void setKey();

    string depositorId;
    string key;
    static int num;
};