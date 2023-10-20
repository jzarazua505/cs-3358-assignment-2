#include "linkedList.h"

template <typename T> LinearSinglyLinkedList<T>::LinearSinglyLinkedList() {
    head = nullptr;
}

template <typename T> LinearSinglyLinkedList<T>::~LinearSinglyLinkedList() {

}

template <typename T> bool LinearSinglyLinkedList<T>::setMaxSize(int newMaxSize) {
    return false;
}

template <typename T> bool LinearSinglyLinkedList<T>::isEmptyList() {
    return !head;
}

template <typename T> bool LinearSinglyLinkedList<T>::isFullList() {
    return false;
}

template <typename T> bool LinearSinglyLinkedList<T>::addElmAtFront(T data) {
    return false;
}

template <typename T> bool LinearSinglyLinkedList<T>::insertElmAtEnd(T data) {
    return false;
}
