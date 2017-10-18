/* CHRISTINE SHUE
   DUE: FEBRUARY 10, 2017
   PURPOSE: customer.h declares all of the members and methods for the
   class Customer.  It also creates a struct transactionType from
   which a linked list can be created for transactions made by the user. */

#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <iostream>
#include <string>

using namespace std;

struct transactionType
{
    int transNum;
    char type;
    double amt;
    string merchant;
    transactionType *link;
};

class Customer
{
private:
    static int acctNum;
    string name;
    double bal;
    struct transactionType *anchor;
    struct transactionType *end;
    int numOfTrans;
public:
    Customer(string);
    void displayCustInfo();
    char bill();
    void addTrans (char,double,string);
    void pay();
    void calcInterest();
    double calcCredit();
    void displayStatement();
    ~Customer();
};

#endif
