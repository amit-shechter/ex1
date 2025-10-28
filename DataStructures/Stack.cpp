#include "LinkedList.h"
#include "Stack.h"
#include <iostream>

using namespace std;

void initStack(Stack* s) {
    s->head = nullptr;
}

bool isEmpty(Stack* s) {
    return s->head == nullptr;
}

bool isFull(Stack* s) {
    return false;
}

void push(Stack* s, unsigned int element) {
    if (element == 0) {
        cerr << "error: only positive numbers allowed\n";
        return;
    }

    addToHead(&(s->head), element);
}

int pop(Stack* s) {
    if (isEmpty(s)) {
        cerr << "error: stack is empty\n";
        return -1;
    }
    unsigned int value = s->head->value;
    removeFromHead(&(s->head));
    return value;
}

void cleanStack(Stack* s) {
    cleanList(&(s->head));
}
