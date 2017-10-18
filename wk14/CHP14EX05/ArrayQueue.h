/* CHRISTINE SHUE
   DUE: 21 APRIL 2017
   PURPOSE: ArrayQueue.h is an interface for the class ArrayQueue.  It
   lists the private and public members of the class for an array
   based queue.
*/

#ifndef ARRAYQUEUE_H
#define ARRAYQUEUE_H

class ArrayQueue
{
private:
    static const int MAX = 50;
    string items[MAX];
    int front;
    int back;
    int count;
public:
    ArrayQueue();
    ~ArrayQueue();
    bool isEmpty() const;
    bool enqueue(string newEntry);
    bool dequeue();
    void display();
    int getNumberOfEntries();
};

#endif
