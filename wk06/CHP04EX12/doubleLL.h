/* CHRISTINE SHUE
   DUE: FEBRUARY 24, 2017
   PURPOSE: doubleLL.h is an interface that creates a struct nodeType
   and a class doubleLL.  This creates a double linked list.
*/
#ifndef DOUBLELL_H
#define DOUBLELL_H

struct nodeType
{
   string name;
   struct nodeType *forward;
   struct nodeType *reverse;
};

class doubleLL 
{
   public:
      doubleLL();
      void addList(string);
      void displayListF();
      void displayListR();
      void deleteNode();

   private:
      struct nodeType *anchor;
      struct nodeType *end;
};

#endif
