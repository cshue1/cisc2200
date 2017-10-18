/* CHRISTINE SHUE
   DUE: 7 APRIL 2017 
   PURPOSE: This application records the run time of the following
   sorting algorithms: */
#define MAX 10
#include <iostream>
#include <ctime>
#include <stdlib.h>

using namespace std;

int findMax(int a[], int s, int e)
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
int selection(int a[])
{
   int lgst;
   for (int i = 0; i < MAX; i++)
   {
       lgst = findMax(a,0,MAX-(i+1));
       if (a[lgst] > a[MAX-(i+1)])
           swap(a[lgst],a[MAX-(i+1)]);
   }
   for (int i = 0; i < MAX; i++)
   {
       cout << a[i] << "   ";
   }
   cout << endl;
}
int bubble(int a[])
{
    for (int i = 1; i < MAX; i++)
    {
	for (int j = 0; j < MAX-i; j++)
	{
	    if (a[j]>a[j+1])
		swap(a[j],a[j+1]);
	}
    }
    for (int i = 0; i < MAX; i++)
    {
	cout << a[i] << "   ";
    }
    cout << endl;

}

int insertion (int a[])
{
    for (int i = 1; i < MAX; i++)
    {
	for (int j = 0; j < i; j++)
	{
	    if (a[i] < a[j])
		swap (a[i],a[j]);
	}
    }
    for (int i = 0; i < MAX; i++)
	cout << a[i] << "   ";
    cout << endl;
}

int main()
{
    double overall;
    int a[MAX],orig[MAX];
    clock_t start,finish;
    srand(time(NULL));
    cout << endl << endl << "ORIGINAL ARRAY" << endl;
    for (int i = 0; i < MAX; i++)
    {
	a[i] = rand() % 200 + 1;
	orig[i] = a[i];
        cout << a[i] << "   ";
    }
    
    cout << endl;

    cout << "\tMETHOD : SELECTION" << endl;
    start = clock();
    selection(a);
    finish = clock();
    overall = static_cast<double>(finish - start) / CLOCKS_PER_SEC;
    cout << "\t\ttime : " << overall << endl << endl;
    cout << "ORIGINAL ARRAY" << endl;
    for (int i = 0; i < MAX; i++)
    {
	a[i] = orig[i];
        cout << a[i] << "   ";
    }
    cout << endl;
    cout << "\tMETHOD : BUBBLE" << endl;
    start = clock();
    bubble(a);
    finish = clock();
    overall = static_cast<double>(finish - start) / CLOCKS_PER_SEC;
    cout << "\t\ttime : " << overall << endl << endl;

    cout << "ORIGINAL ARRAY" << endl;
    for (int i = 0; i < MAX; i++)
    {
        a[i] = orig[i];
        cout << a[i] << "   ";
    }
    cout << endl;
    cout << "\tMETHOD : INSERTION" << endl;
    start = clock();
    insertion(a);
    finish = clock();
    overall = static_cast<double>(finish - start) / CLOCKS_PER_SEC;
    cout << "\t\ttime : " << overall << endl << endl;

    
    return 0;
}
