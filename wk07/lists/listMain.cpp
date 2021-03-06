#include <iostream>
#include <string>

using namespace std;

#include "list.h"
#include "list.cpp"

int main()
{
    list lineUp;

    if(lineUp.isEmpty())
	cout << "ZERO PLAYERS" << endl;
    else
	cout << "PLAYERS FOUND" << endl;
    
    lineUp.insert(1, "Rose");
    lineUp.insert(2, "Griffey");
    lineUp.insert(3, "Morgan");
    lineUp.display();

    lineUp.insert(4, "Foster");
    lineUp.insert(5, "Bench");
    lineUp.insert(6, "Perez");
    lineUp.display();

    lineUp.insert(7, "Wright");
    lineUp.insert(8, "Cepedes");
    lineUp.insert(9, "Ryan");
    lineUp.display();

    lineUp.replace(1, "Bonds");
    lineUp.display();

    if (lineUp.isEmpty())
	cout << "NO PLAYERS" << endl;
    else
	cout << "PLAYERS FOUND" << endl;
    lineUp.clear();
    lineUp.display();
    if (lineUp.isEmpty())
        cout << "NO PLAYERS" << endl;
    else
        cout << "PLAYERS FOUND" << endl;

}
