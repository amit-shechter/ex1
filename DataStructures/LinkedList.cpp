#include "LinkedList.h"
#include <iostream>

using namespace std;

void initList(Node** head) {
    *head = nullptr;
}

void addToHead(Node** head, unsigned int newValue) {
    if (newValue == 0) {
        cerr << "error:only positive numbers allowed\n";
        return;
    }

    Node* newNode = new Node;
    newNode->value = newValue;
    newNode->next = *head; 
    *head = newNode;           
}

void removeFromHead(Node** head) {
    if (*head == nullptr) {
        cerr << "error:list is empty\n";
        return;
    }

    Node* temp = *head; 
    *head = (*head)->next;  
    delete temp; 
}

void printList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->value << " -> ";
        current = current->next;
    }
    cout << "NULL" << endl;
}

void cleanList(Node** head) {
    while (*head != nullptr) {
        removeFromHead(head);
    }
}

