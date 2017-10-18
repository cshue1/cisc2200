#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

// definition of the node
struct stackType
{
    int data;
    struct stackType *link;
};

#include "stack.h"
#include "stack.cpp"
int main()
{
	stack stk;
	int val1, val2, operand, answer;
	string input;

	while (1)
	{
            cout << "Enter op(+, -, /, *) or operand (10, 12,...) or (q=quit) : ";
	    getline(cin,input);
	    if (input.at(0) == 'q')
	    {
                break;
	    }
	    else if (input.at(0) == '+')  // addition operation
	    {
	        if (stk.numOfElements >= 2)
		{
                    val1 = stk.pop();
		    val2 = stk.pop();
	            answer = val1 + val2;
                    stk.push(answer);
		}
		else
		{
		    cout << "Error : Invalid Operation" << endl;
		}
	    }
	    else if (input.at(0) == '-')
	    {
                cout << "Operator is -" << endl;
	    }
	    else if (input.at(0) == '/')
	    {
                cout << "Operator is /" << endl;
	    }
	    else if (input.at(0) == '*')
	    {
                cout << "Operator is *" << endl;
	    }
	    else
	    {
	        operand = atoi(input.c_str());
		stk.push(operand);
	    }


	    stk.displayStack();
	} // end while
	return 0;
}
