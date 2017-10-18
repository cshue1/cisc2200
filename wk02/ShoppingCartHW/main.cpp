/* CHRISTINE SHUE
   DUE: FEBRUARY 3, 2017
   PURPOSE: This application creates a shopping cart that a
   user can add or remove items to. */
#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>
#include <unistd.h>

using namespace std;

// definition of the node
struct productType
{
   string product;
   double price;
   struct productType *link;
};

#include "product.h"
#include "product.cpp"

product cart;

int main()
{
   string input, prod, price;
  
   while (1)
   {
      system("clear");
      cart.displayCart();

      cout << endl << endl;
      cout << "Enter A=Add, R=Remove, C=Contains, E=empty, or Q to quit : ";
      getline(cin,input);

      if (input.length() >= 1)
      {
         if (input.at(0) == 'Q'|| input.at(0) == 'q')
         {
            break;
         }
         else if (input.at(0) == 'A' || input.at(0) == 'a') 
         {
            cout << endl << endl;
            cout << " Enter the Product Name (ADD) : ";
            getline(cin,prod);
            cout << "Enter the Product Price (ADD) : ";
            getline(cin,price);

            cart.add(prod, atof(price.c_str()));
         }
         else if (input.at(0) == 'R' || input.at(0) == 'r')
         {
             if (cart.isEmpty())
             {
                cout << endl << endl << "Sorry. The cart is empty." << endl;
                sleep (3);
             }
             else
	     {
	         cout << endl << endl;
                 cout << " Enter the Product Name (REMOVE) : ";
		 getline(cin,prod);
		     
		 if (cart.remove(prod) == true)
		 {
		     cout << endl << endl 
		     << " ***** Product is being removed from the cart!......" << endl;
		      
		     sleep (3);
		 }
		 else
		 {
		     cout << endl << endl 
		     << " ***** The product was NOT found in the cart! ***** " << endl;
			     
		     sleep (3);
		 }
	     }
	 }
         else if (input.at(0) == 'C' || input.at(0) == 'c')
	 {
	     if (cart.isEmpty())
	     {
		 cout << endl << endl << "Sorry. The cart is empty." << endl;
		 sleep (3);
	     }
	     else
	     {
		 cout << endl << endl;
		 cout << " Enter the Product Name (CONTAINS) : ";
		 getline(cin,prod);
			 
	         if (cart.contains(prod))
                 {
	             cout << endl << endl 
		     << " ***** Yes. The product is in the cart " << cart.getFrequencyOf(prod) << " times! ***** " << endl;
		    
	             sleep (3);
                 }
		 else
		 {
		     cout << endl << endl 
		     << " ***** No. The product is not in the cart! ***** " << endl;
				 
	             sleep (3);
	         }
	     }
	 }
	 else if (input.at(0) == 'E' || input.at(0) == 'e')
	 {
	     if (cart.isEmpty())
	     {
	         cout << endl << endl << "The cart is already empty." << endl;
                 sleep (3);
	     }
	     else
	     {
                 cart.clear();
	         cout << endl << endl 
			  << " ***** The cart is being emptied!......" << endl;
		     
		 sleep (3);
	     }
	 }
         else
         {
	     continue;
         }
      }
   }// end while
   
   return 0;
}
