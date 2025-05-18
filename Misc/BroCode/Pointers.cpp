#include <iostream>
using namespace std;

// Pointers = variables that stores a memory address of another variable.
//            Sometimes it's easier to work with an address


//  & address-of operator
//  * dereference operator

int main()
{
    string name = "Blizzy";
    int age = 27;
    string freePizzas[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};

    string *pName = &name;
    int *pAge = &age;
    string *pFreePizzas = freePizzas;

    cout << *pName << '\n';
    cout << *pAge << '\n';
    cout << *pFreePizzas << '\n';
    cout << pFreePizzas << '\n';


    return 0;
}