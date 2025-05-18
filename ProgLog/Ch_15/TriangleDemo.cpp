//Simple program to test Triangle class

#include "Triangle.h"
#include <iostream>
using namespace std;

int main()
{
    Triangle triforce;
    double inBase = 0.0;
    double inHeight = 0.0;

    cout << "What is the length of the triangle's base?: ";
    cin >> inBase;
    cout << "\nWhat is the length of the triangle's height?:";
    cin >> inHeight;

    triforce.setBase(inBase);
    triforce.setHeight(inHeight);

    cout << "Triangle with a base of " << triforce.getBase() << endl;
    cout << " and height of " << triforce.getHeight() << endl;
    cout << "has an area of " << triforce.calcArea() << endl;


    return 0;
}