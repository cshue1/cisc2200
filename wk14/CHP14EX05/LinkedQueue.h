/* CHRISTINE SHUE
   DUE: 21 APRIL 2017
   PURPOSE: LinkedQueue is an interface for the class LinkedQueue.  It
   lists the private and public members for a link based queue.*/

#ifndef LINKEDQUEUE_H
#define LINKEDQUEUE_H

struct Node
{
    string item;
    Node *next;
};

class LinkedQueue
{
private:
    Node *anchor;
    Node *end;
    int count;
public:
    LinkedQueue();
    ~LinkedQueue();
    bool isEmpty() const;
    bool enqueue(string newEntry);
    bool dequeue();
    void display();
    int getNumberOfEntries();
};

#endif
