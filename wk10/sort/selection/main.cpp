#define MAX 10
#include <iostream>
#include <stdlib.h>


using namespace std;

int a[MAX];
int findMax(int s, int e)
{
    int l;
    l = s;
    for (int i = s+1; i < e; i++)
    {
	if (a[i] > a[l])
	    l = i;
    }
    return l;
}
void swap(int& a, int& b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    
    int lgst;
    srand(time(NULL));
    for (int i = 0; i < MAX; i++)
    {
	a[i] = rand() % 50 + 1;
	cout << a[i] << "   ";
    }
    cout << endl << "SORTING:" << endl;
    for (int i = 0; i < MAX; i++)
    {
	lgst = findMax(0,MAX-(i+1));
	if (a[lgst] > a[MAX-(i+1)])
	    swap(a[lgst],a[MAX-(i+1)]);
    }
    for (int i = 0; i < MAX; i++)
    {
	cout << a[i] << "   ";
    }
    cout << endl << endl;
    
}
