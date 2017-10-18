#include <iostream>
using namespace std;

#include "priority.h"
#include "priority.cpp"

int main()
{
    int pri,pos = 0;
    string name;
    priority pQ;
    
    do
    {

	if (pos < 10)
	{
	    pos++;
	    cout << "Enter priority or -1 to quit: ";
	    cin  >> pri;
	    if (pri != -1)
	    {
		cout << "Enter name : ";
		cin  >> name;
		pQ.add(pri,name);
		pQ.display();
		
	    }
	}
    }while (pri != -1);
    return 0;
}
