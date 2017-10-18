/* CHRISTINE SHUE
   DUE: FEBRUARY 3, 2017
   PURPOSE: product.h is an interface for a shopping cart program.
   It creates a class called product  to be used in the application
   of creating a shopping cart.*/
#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>

class product
{
   public:
      product();
      int  getCurrentSize();
      bool isEmpty();
      void add(string, double);
      bool remove(string);
      void clear();
      int  getFrequencyOf(string);
      bool contains(string);
      void displayCart();
      
   private:
      struct productType *anchor;
      int numOfProducts;
};

#endif // PRODUCT_H
