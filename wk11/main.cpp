#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int counter;
    clock_t start,finish;
    counter = 0;

    start = clock();
    for (int i = 1; i <= 15000000; i++)
    {
	counter = counter + 1;
    }
    finish = clock();

    double overall = static_cast<double>(finish - start) / CLOCKS_PER_SEC;

    cout << "Time was " << overall << endl;

    return 0;
}