#ifndef QUEUE_H
#define QUEUE_H
/* a queue contains positive integer values. */
struct Queue
{
    unsigned int* data;
    size_t size;
    size_t front;
    size_t rear;
    size_t count;
};

void initQueue(Queue* q, unsigned int size);
void cleanQueue(Queue* q);
void enqueue(Queue* q, unsigned int newValue);
int dequeue(Queue* q);
bool isEmpty(Queue* q);
bool isFull(Queue* q);

#endif
