#include <iostream>
using namespace std;

int fib(int x)
{
    if (x == 0)
        return 0;

    if (x == 1)
        return 1;

    return fib(x-1) + fib(x-2);
}

int main()
{
   int n, result;

   cout << "Enter the Fibonacci number slot to calculate : ";
   cin >> n;

   result = fib(n);
   cout << "the Fibonacci number is " << result << endl;

   return 0;
}
