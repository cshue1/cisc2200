/* CHRISTINE SHUE
   DUE: FEBRUARY 24, 2017
   PURPOSE: prefixMain.cpp is an application that gets a prefix
   exprssion from the user and uses class Prefix to evaluate the expression.
*/
#include <iostream>
#include <string>
#include <stack>

using namespace std;

#include "prefix.h"
#include "prefix.cpp"

int main()
{
    char ch;
    double value;
    string input;
    Prefix expression;
    do
    {
	cout << "Please enter a prefix expression:\n\t";
	getline(cin,input);
    }   while (input.at(0) != '+' && input.at(0) != '-'
	    && input.at(0) != '*' && input.at(0) != '/');

    expression.getPrefixExp(input);
    expression.populateStacks();
    value = expression.calculate();
    cout << "Expression evaluates to: " << value << endl;
    return 0;
}