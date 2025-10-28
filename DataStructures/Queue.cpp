#include "Queue.h"
#include <iostream>


void initQueue(Queue* q, unsigned int size)
{
    q->data = new unsigned int[size];
    q->size = size;
    q->front = 0;
    q->rear = 0;                
    q->count = 0;                    
}

void cleanQueue(Queue* q)
{
    delete[] q->data;            
    q->data = nullptr;
    q->size = q->front = q->rear = q->count = 0;
}

bool isEmpty(Queue* q)
{
    return q->count == 0;
}

bool isFull(Queue* q)
{
    return q->count == q->size;
}

void enqueue(Queue* q, unsigned int newValue)
{
    if (isFull(q))
    {
        std::cerr << "error:Queue is full\n";
        return;
    }

    if (newValue == 0)
    {
        std::cerr << "error:only positive numbers are allowed\n";
        return;
    }

    q->data[q->rear] = newValue;
    q->rear++;        
    q->count++;               
}

int dequeue(Queue* q)
{
    if (isEmpty(q))
        return -1;        

    unsigned int val = q->data[q->front]; 
    q->front++;                        
    q->count--;                      
    return val;          
}
