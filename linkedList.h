#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include "node.h"


template <typename T>
class LinearSinglyLinkedList {
    
    public:
    LinearSinglyLinkedList(int);
    ~LinearSinglyLinkedList();
    bool setMaxSize(int);
    bool isEmptyList();
    bool isFullList();
    bool addElmAtFront(T);
    bool insertElmAtEnd(T);
    bool removeFromFront();
    void copyList(); 
    void deleteList();
    void nextElm();
    
    private:
    Node<T> *head;
    int maxSize;
    int currentSize;
};

template <typename T> LinearSinglyLinkedList<T>::LinearSinglyLinkedList(int initMaxSize) {
    head = nullptr;
    maxSize = initMaxSize;
    currentSize = 0;
}

template <typename T> LinearSinglyLinkedList<T>::~LinearSinglyLinkedList() {
    deleteList();
}

template <typename T> bool LinearSinglyLinkedList<T>::setMaxSize(int newMaxSize) {
    if (newMaxSize < currentSize) {
        return false;
    }
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
    if (isFullList) {
        return false;
    }
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

template <typename T> bool LinearSinglyLinkedList<T>::removeFromFront() {
    if (!head) {
        return false;
    }
    Node<T> *previous = head;
    head = head->next;
    delete previous;
    return true;
}

// template <typename T> void LinearSinglyLinkedList<T>::copyList() {

// }

template <typename T> void LinearSinglyLinkedList<T>::deleteList() {
    while (head) {
        Node<T> *previous = head;
        head = head->next;
        delete previous;
    }
}

// template <typename T> void LinearSinglyLinkedList<T>::nextElm() {

// }

#endif