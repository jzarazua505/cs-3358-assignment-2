#ifndef STACK_H
#define STACK_H

#include "linkedList.h"

template <typename T>
class Stack
{
  
public:
    Stack(int);
    ~Stack();
    bool push(T);
    bool pop();
    bool top(T&);
    bool isEmpty();
    bool isFull();
    
private:
    LinearSinglyLinkedList<T> *stack;

};

template <typename T> Stack<T>::Stack(int maxSize) {
    stack = new LinearSinglyLinkedList<T>(maxSize);
}

template <typename T> Stack<T>::~Stack<T>() {
    delete stack;
}

template <typename T> bool Stack<T>::push(T data) {
    return stack->addElmAtFront(data);
}

template <typename T> bool Stack<T>::pop() {
    return stack->removeFromFront();
}

template <typename T> bool Stack<T>::top(T& outputData) {
    return stack->nextElm(outputData);
}

template <typename T> bool Stack<T>::isEmpty() {
    return stack->isEmptyList();
}

template <typename T> bool Stack<T>::isFull() {
    return stack->isFullList();
}


#endif