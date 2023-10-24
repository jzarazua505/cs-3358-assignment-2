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
    //bool removefromFront(); WHAT DO THE FOLLOWING METHODS RETURN?
    //void copyList(); WHAT ARGUMENTS DO THEY ACCEPT?
    //void deleteList();
    //void nextElm();
    
    private:
    Node<T> *head;
    int maxSize;
    int currentSize;
};

#endif