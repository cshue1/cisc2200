/* CHRISTINE SHUE
   DUE: 7 APRIL 2017
   PURPOSE: SortedLinkedList.h is an interface of the class
   sortedLinkedList.  It contains the method functions to perform the
   following actions: add, delete, display list, check if empty.*/
#ifndef SORTEDLINKEDLIST_H
#define SORTEDLINKEDLIST_H

struct nameDirType
{
   string name;
   string occupation;

   struct nameDirType *next;
};

class sortedLinkedList
{
public:
    sortedLinkedList();
    bool insertSorted(string, string);
    bool removeSorted(string);
    bool isEmpty();
    void displaySortedList();
    
private:
    struct nameDirType *anchorPtr;
    int numOfElements;
};

#endif
