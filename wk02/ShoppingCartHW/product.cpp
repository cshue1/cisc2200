/* CHRISTINE SHUE
   DUE: FEBRUARY 3, 2017
   PURPOSE: product.cpp is the implementation file for the class
   product.  It implements all of the methods that are declared in the product.h
   file.*/
#include <iostream>
#include <iomanip>

using namespace std;

#include "product.h"

product::product()
{
    anchor = NULL;
    numOfProducts = 0;
}

int product::getCurrentSize()
{
    return numOfProducts;
}

bool product::isEmpty()
{
    if (anchor == NULL)
	return true;
    else
	return false;
}

void product::add (string name, double cost)
{
    struct productType *newP = anchor;
    newP = new productType;
    newP->product = name;
    newP->price = cost;
    newP->link = anchor;
    anchor = newP;
    numOfProducts++;
}

bool product::remove (string name)
{
    if (!contains(name))
	return 0;
    productType *temp = anchor;
    if (anchor -> product == name)
    {
	anchor = anchor -> link;
	-- numOfProducts;
	return 1;
    }
    else
    {
	while (temp != NULL)
	{
	    if (temp -> link -> product == name)
	    {
	         if(temp -> link -> link != NULL)
	             temp -> link = temp -> link -> link;
		 else
	             temp -> link = NULL;
		 -- numOfProducts;
	         return 1;
            }
	    else
	        temp = temp -> link;
	}
    }
    return 0;
}

void product::clear()
{
    anchor = NULL;
    numOfProducts = 0;
}

int product::getFrequencyOf(string name)
{
    int counter = 0;
    productType *temp = anchor;
    while (temp != NULL)
    {
        if (temp -> product == name)
            ++ counter;
        temp = temp -> link;
    }
    return counter;
}

bool product::contains(string name)
{
    productType *temp = anchor;
    while (temp != NULL)
    {
	if (temp -> product == name)
            return 1;
	temp = temp -> link;
    }
    return 0;
}

void product::displayCart()
{
    double total = 0.00;
    productType *temp = anchor;
    cout << "------------------ SHOPPING CART ------------------" << endl;
    while (temp != NULL)
    {
        cout << setw(10) << temp->product << fixed << showpoint << setprecision(2)
	     << "\t\t\t\t" << setw(6) << temp->price << endl;
        total += temp -> price;
	temp = temp -> link;
    }
    if (numOfProducts == 0)
	cout << "The cart is empty" << endl;
    else
    {
        cout << "---------------------------------------------------" << endl;
        cout << "TOTAL NUMBER OF ITEMS : " << numOfProducts << endl;
        cout << "TOTAL COST : " << fixed << showpoint << setprecision(2) <<total << endl;
    }
}
