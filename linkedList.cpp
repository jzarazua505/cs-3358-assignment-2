#include "linkedList.h"

template <typename T> LinearSinglyLinkedList<T>::LinearSinglyLinkedList() {
    head = nullptr;
}

template <typename T> LinearSinglyLinkedList<T>::~LinearSinglyLinkedList() {

}

template <typename T> bool LinearSinglyLinkedList<T>::setMaxSize(int newMaxSize) {
    maxSize = newMaxSize;
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
    Node<T> *current = head;
    Node<T> *previous = nullptr;
    while (current) {
        previous = current;
        current = current->next;
    }
    if (!current) {
        if (previous) {
            previous->next = new Node<T>{data, nullptr};
            currentSize++;
            return true;
        }
        
    } else {
        return false;
    }
}
