// Program to test Hexagon class

#include "Hexagon.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //declare Hexagon object and initialize variables
    Hexagon stopSign;
    double sideLength = 0.0;

    //get side length and set it
    cout << "What is the length of a side?: ";
    cin >> sideLength;
    stopSign.setSide(sideLength);

    cout << setprecision(2) << fixed;
    cout << "A hexagon with a side length of " << sideLength << endl;
    cout << " has an area of " << stopSign.calcArea() << endl;
    cout << "and a perimeter of " << stopSign.calcPerimeter() << endl;
}