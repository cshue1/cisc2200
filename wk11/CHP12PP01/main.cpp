/* CHRISTINE SHUE
   DUE: 7 APRIL 2017
   PURPOSE: This application tests the methods of the class sortedLinkedList.*/
#include <iostream>
#include <iomanip>
using namespace std;

#include "SortedLinkedList.h"
#include "SortedLinkedList.cpp"

int main()
{
   bool done;
   int  choice;
   string sname, soccupation;
   sortedLinkedList studentDir;

   done = false;
   while (done == false)
   {
      cout << " 1) Insert new student " << endl;
      cout << " 2) Remove student " << endl;
      cout << " 3) Display Student Directory" << endl;
      cout << " 0) Exit               " << endl;
      cout << " Enter a selection : ";
      cin  >> choice;

      switch (choice)
      {
         case 1:
            cout << "       Enter a student name : ";
            cin  >> sname;
            cout << " Enter a student occupation : ";
            cin  >> soccupation;
 
            if (studentDir.insertSorted(sname, soccupation))
               cout << "Insert was done!" << endl;
            else
               cout << "ERROR : Insert not done!" << endl;

            studentDir.displaySortedList();
         break;

         case 2:
	     cout << "Enter the name of the student that you would like to delete : ";
	     cin  >> sname;
	     studentDir.removeSorted(sname);
	 break;
         case 3:
	     studentDir.displaySortedList();
         break;
         case 0:
            done = true;
         break;
      
         default:
            cout << "Sorry! Invalid choice was made!" << endl;
         break;
      }
   }

   return 0;
}
