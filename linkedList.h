#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include "node.h"


template <typename T>
class LinearSinglyLinkedList {
    public:
    LinearSinglyLinkedList();
    ~LinearSinglyLinkedList();
    bool setMaxSize(int);
    bool isEmptyList();
    bool isFullList();
    bool addElmAtFront(T);
    bool insertElmAtEnd(T);
    bool removefromFront(T);
    void copyList(); 
    void deleteList();
    void nextElm();
    
    private:
    Node<T> *head;
    int maxSize;
    int currentSize;
};

template <typename T> LinearSinglyLinkedList<T>::LinearSinglyLinkedList() {
    head = nullptr;
}

template <typename T> LinearSinglyLinkedList<T>::~LinearSinglyLinkedList() {

}

template <typename T> bool LinearSinglyLinkedList<T>::setMaxSize(int newMaxSize) {
    maxSize = newMaxSize;
    return true;
}

template <typename T> bool LinearSinglyLinkedList<T>::isEmptyList() {
    return !head;
}

template <typename T> bool LinearSinglyLinkedList<T>::isFullList() {
    return maxSize == currentSize;
}

template <typename T> bool LinearSinglyLinkedList<T>::addElmAtFront(T data) {
    Node<T> *newNode = new Node<T>{data, head};
    head = newNode;
    currentSize++;
    return true;
}

template <typename T> bool LinearSinglyLinkedList<T>::insertElmAtEnd(T data) {
    if (isFullList) {
        return false;
    }
    Node<T> *current = head;
    Node<T> *previous = nullptr;
    while (current) {
        previous = current;
        current = current->next;
    }
    Node<T> *newNode = new Node<T>{data, nullptr};
    if (previous) {
        previous->next = newNode;
    } else {
        head = newNode;
    }
    currentSize++;
    return true;
}

#endif