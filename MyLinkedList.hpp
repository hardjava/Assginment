#pragma once

#include "MyNode.hpp"

template<typename T>
class MyLinkedList {
public:
    MyLinkedList();

    MyNode<T> *getHead() const;

    // ~MyLinkedList();

private:
    MyNode<T> *head = nullptr;
};

template<typename T>
MyLinkedList<T>::MyLinkedList() {
    head = new MyNode<T>();
    head->setNext(head);
}

template<typename T>
MyNode<T> *MyLinkedList<T>::getHead() const {
    return head;
}

/*
template<typename T>
MyLinkedList<T>::~MyLinkedList() {
    // 소멸자 정의해야함
}
*/