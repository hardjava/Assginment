#pragma once

#include "MyLinkedList.hpp"
#include "Donator.h"
#include "MyNode.hpp"

class DonatorLinkedList {
public:
    void addDonator(Donator *);

    void printDescending() const;

    bool isPossibleToInsert(const string &) const;

private:

    MyNode<Donator *> *findPreviousNode(Donator *) const;

    MyNode<Donator *> *findPreviousByKey(MyNode<Donator *> *, Donator *) const;

    MyLinkedList<Donator *> list;
};
