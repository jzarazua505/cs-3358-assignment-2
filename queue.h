#ifndef QUEUE_H
#define QUEUE_H

#include "linkedList.h"

template <typename T>
class Queue
{
  
public:
    Queue(int);
    ~Queue();
    bool insert(T);
    bool remove();
    bool next(T&);
    bool isEmpty();
    bool isFull();
    
private:
    LinearSinglyLinkedList<T> *queue;

};

template <typename T> Queue<T>::Queue(int maxSize) {
    queue = new LinearSinglyLinkedList<T>(maxSize);
}

template <typename T> Queue<T>::~Queue<T>() {
    delete queue;
}

template <typename T> bool Queue<T>::insert(T data) {
    return queue->insertElmAtEnds(data);
}

template <typename T> bool Queue<T>::remove() {
    return queue->removeFromFront();
}

template <typename T> bool Queue<T>::next(T& outputData) {
    return queue->nextElm(outputData);
}

template <typename T> bool Queue<T>::isEmpty() {
    return queue->isEmptyList();
}

template <typename T> bool Queue<T>::isFull() {
    return queue->isFullList();
}


#endif