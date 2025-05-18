// Modified PatioArea.cpp
// displays area using a header file class

#include <iostream>
#include "Square.h"
using namespace std;

int main()
{
    //instantiate a Square object
    Square patio;
    //declare variables
    double sideMeasurement = 0.0;
    double area = 0.0;

    //get side measurement
    cout << "Side measurement (feet): ";
    cin >> sideMeasurement;
    //assign side measurement
    patio.setSide(sideMeasurement);

    //calcualte and display side
    area = patio.calcArea();
    cout << "The area of a square patio " 
        << "with a side measurement of " << endl
        << patio.getSide() << " feet is " 
        << area << " square feet. " << endl;
    
    return 0;
}//end main function