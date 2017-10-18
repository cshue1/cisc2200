
#include <iostream>
using namespace std;

int a[10];

void printBackwards(int indx)
{
    if (indx == 9)
    {
	cout << a[indx] << " ";
    }
    else
    {
	printBackwards(indx+1);
	cout << a[indx] << " ";
    }
	cout << endl;
}


int main()
{
    int base = 100;

    for (int i=0; i < 10; i++)
    {
	a[i] = base;
	base += 100;
    }
    printBackwards(0);

    return 0;
}
