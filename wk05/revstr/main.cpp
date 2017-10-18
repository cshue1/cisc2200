#include <string>
#include <iostream>


#include "reverse.h"
#include "reverse.cpp"

using namespace std;
int main()
{
    string input;
    reverse rev;

    cout << "Enter a srting to reverse:";
    getline(cin, input);

    rev.reverseTheString(input);

    return 0;
}
