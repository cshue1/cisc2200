/* CHRISTINE SHUE
   DUE: 21 APRIL 2017
   PURPOSE: main.cpp is an application that tests the following
   classes: ArrayQueue and LinkedQueue.  Specifically, it tests the
   function asked for in Exercise 5, which is getNumberOfEntries().
*/

#include <iostream>
using namespace std;

#include "LinkedQueue.h"
#include "LinkedQueue.cpp"
#include "ArrayQueue.h"
#include "ArrayQueue.cpp"

int main()
{
    ArrayQueue aq;
    LinkedQueue lq;

    cout << endl << "TESTING ArrayQueue : " << endl;
    aq.enqueue("John");
    aq.enqueue("Michael");
    aq.enqueue("Wendy");
    aq.enqueue("Tigerlily");
    aq.display();
    cout << "Number of Entries : " << aq.getNumberOfEntries() << endl;
    aq.dequeue();
    aq.display();
    cout << "Number of Entries : " << aq.getNumberOfEntries() << endl;

    cout << endl << "TESTING LinkedQueue : " << endl;
    lq.enqueue("John");
    lq.enqueue("Michael");
    lq.enqueue("Wendy");
    lq.enqueue("Tigerlily");
    lq.display();
    cout << "Number of Entries : " << lq.getNumberOfEntries() << endl;
    lq.dequeue();
    lq.display();
    cout << "Number of Entries : " << lq.getNumberOfEntries() << endl;

    return 0;
}
