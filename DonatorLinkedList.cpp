#include "DonatorLinkedList.h"

void DonatorLinkedList::addDonator(Donator *donator) {
    MyNode<Donator *> *newNode = new MyNode<Donator *>(donator);
    MyNode<Donator *> *previousNode = findPreviousNode(donator);
    newNode->setNext(previousNode->getNext());
    previousNode->setNext(newNode);
}

MyNode<Donator *> *DonatorLinkedList::findPreviousNode(Donator *donator) const {
    MyNode<Donator *> *head = list.getHead();
    MyNode<Donator *> *node = list.getHead();
    while (node->getNext() != head && donator->operator<(node->getNext()->getElement())) {
        node = node->getNext();
    }
    node = findPreviousByKey(node, donator);
    return node;
}

MyNode<Donator *> *DonatorLinkedList::findPreviousByKey(MyNode<Donator *> *from, Donator *donator) const {
    MyNode<Donator *> *head = list.getHead();
    while (from->getNext() != head && donator->operator==(from->getNext()->getElement()) &&
           donator->getKey() > from->getNext()->getElement()->getKey()) {
        from = from->getNext();
    }
    return from;
}

void DonatorLinkedList::printDescending() const {
    MyNode<Donator *> *head = list.getHead();
    MyNode<Donator *> *node = list.getHead();

    while (node->getNext() != head) {
        cout << node->getNext()->getElement()->toString() << endl;
        node = node->getNext();
    }
}

bool DonatorLinkedList::isPossibleToInsert(const string &str) const {

}