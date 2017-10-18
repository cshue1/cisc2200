/* CHRISTINE SHUE
   DUE: FEBRUARY 24, 2017
   PURPOSE: main.cpp is an application that creates a double linked
   list using the class doubleLL.  It allows the user to display the
   list forward or backwards.  It also allows the user to add or
   delete an item from the list.*/
#include <iostream>
using namespace std;

#include "doubleLL.h"
#include "doubleLL.cpp"

int main()
{
   bool done;
   char cmd;
   string input;
   doubleLL dll;

   done = false;
   system("clear");
   while (!done)
   {
      cout << "Enter A=Add, F=Display Forward, R=Display Reverse, D=Delete or q=quit : ";
      getline(cin, input);

      cmd = input.at(0);
      switch (cmd)
      {
         case 'A':
         case 'a':
            cout << "Enter a name to add to the list : ";
            getline(cin, input);

            dll.addList(input);
         break;

         case 'F':
         case 'f':
            dll.displayListF();
         break;

         case 'R':
         case 'r':
	     dll.displayListR();
         break;

         case 'D':
         case 'd':
	     dll.deleteNode();
         break;
	 
         case 'Q':
         case 'q':
            done = true;
         break;

         default:
            cout << "Sorry! Invalid selection was made!" << endl;
         break;
      }
   }

   return 0;
}
