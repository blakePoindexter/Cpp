// attempt at blind fibonacci function

//really slow an inefficient compared to DP

#include <iostream>
using namespace std;

int fibonacci(int n);

int main ()
{
    // Fibonacci sequence: a sequence of numbers, where
    // a number, n, where n = (n - 1) + (n - 2)
    // 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55....-
    int n;
    cout << "Enter number of Fibonacci numbers to display: ";
    cin >> n;
    for( int i = 0; i < 30; i++)
        cout << "*";
    cout << endl << endl;
    cout << "Fibonacci Demo to " << n << " places: \n";

    for(int i = 0; i < n; i++)
    {
        cout << fibonacci(i) << " ";
    }
    cout << endl << endl;

    return 0;
}

int fibonacci(int n)
{
    if(n == 0 || n == 1) 
        return n;
    else
        return (fibonacci(n - 1) + fibonacci(n - 2));
}