#ifndef LINKEDLIST_H
#define LINKEDLIST_H

struct Node {
    unsigned int value;
    Node* next;
};

//my functions
void initList(Node** head);
void addToHead(Node** head, unsigned int newValue);
void removeFromHead(Node** head);
void printList(Node* head);
void cleanList(Node** head);

#endif
