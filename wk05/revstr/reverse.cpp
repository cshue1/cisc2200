#include "reverse.h"

void reverse::reverseTheString(string s)
{
    string temp;

    length = s.length();
    if (length == 0)
    {
    }
    else if (length == 1)
    {
	cout << s.at(0) << endl;
    }
    else
    {
	temp = s;
	reverseTheString(s.erase(0,1));
	cout << temp.at(0); << endl;
    }
}
