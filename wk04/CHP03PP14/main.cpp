/* CHRISTINE SHUE
   DUE: FEBRUARY 10, 2017
   PURPOSE: This application serves as an ADT that represents a credit
   card account.  It uses class Customer created in customer.h to
   similate a program that might be used by someone needing to manage
   their credit card. */

#include "customer.h"
#include "customer.cpp"

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void Header(string name)
{
    cout << endl << endl;
    cout << "\t\t\tWELCOME, " << name << "!" << endl;
    cout << endl;
}

int main()
{
    char input;
    string name,merchant;
    double amount;
    int action;
    bool done = false;

    system("clear");
    cout << "WELCOME!\nPlease enter your name: ";
    getline(cin,name);
    Customer user(name);
    cout << "Hi, " << name << "!" << endl;
    while (!done)
    {
	cout << "\tPlease enter a selection:\n"
	     << "\t\t1 : Display Customer Information\n"
	     << "\t\t2 : Add A Transaction (Debit/Credit)\n"
	     << "\t\t3 : View Your Statement\n"
	     << "\t\t4 : Make a Payment\n"
	     << "\t\t0 : Quit" << endl;
	cin  >> action;
    	switch (action)
	{
	case 1:
	    system("clear");
	    Header(name);
	    user.displayCustInfo();
	    cout << endl << endl << endl;
	    break;
	case 2:
	    system("clear");
	    Header(name);
	    cout << "Enter C for Credit or D for debit: ";
	    cin  >> input;
	    cout << "Enter the amount of the transaction: ";
	    cin  >> amount;
	    cout << "Enter the merchant name: ";
	    cin.ignore();
	    getline(cin, merchant);
	    user.addTrans(input,amount,merchant);
	    cout << endl << endl << endl;
	    break;
	case 3:
	    system("clear");
	    Header(name);
	    user.displayStatement();
	    cout << endl << endl << endl;
	    break;
	case 4:
	    system("clear");
	    Header(name);
	    user.pay();
	    cout << endl << endl << endl;
	    break;
	case 0:
	    system("clear");
	    done = true;
	    break;
	default:
	    break;
	}
    }
    return 0;
}


