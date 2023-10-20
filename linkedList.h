#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include "node.h"

template <typename T>
class LinearSinglyLinkedList {
    public:
    LinearSinglyLinkedList();
    ~LinearSinglyLinkedList();
    void setMaxSize();
    bool isEmptyList();
    bool isFullList();
    bool addElmAtFront();
    bool insertElmAtEnd();
    bool removefromFront();
    void copyList();
    void deleteList();
   //void nextElm();
    
    private:
    Node<T> *head;
    int maxSize;
};

#endif