#include <iostream>
using namespace std;

int factorial(int);

int main()
{
    cout << factorial(10);

}

/* Iterative approach
int factorial(int)
{
    int result = 1;
    for( int i = 0; i <= num; i++)
    {
        result = result * i;
        
    }
    return result;
}
*/

//Recursive approach
int factorial(int num)
{
    if(num > 1)     //recursive case
    {
        return num * factorial(num - 1);
    }
    else    //base case 
    {
        return 1;
    }
}

