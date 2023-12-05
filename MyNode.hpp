#pragma once

template<typename T>
class MyNode {
public:

    MyNode();

    MyNode(T);

    void setNext(MyNode<T> *);

    MyNode<T> *getNext() const;

    const T getElement() const;

private:
    T element = nullptr;
    MyNode<T> *next = nullptr;
};

template<typename T>
MyNode<T>::MyNode() {}

template<typename T>
MyNode<T>::MyNode(T p) {
    element = p;
}

template<typename T>
void MyNode<T>::setNext(MyNode<T> *myNode) {
    next = myNode;
}

template<typename T>
MyNode<T> *MyNode<T>::getNext() const {
    return next;
}

template<typename T>
const T MyNode<T>::getElement() const {
    return element;
}