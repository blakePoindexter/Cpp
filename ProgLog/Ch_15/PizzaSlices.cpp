// PizzaSlices.cpp - Displays the number of swuare pizza slices 
// that can be cut from a square pizza
// Author - Blake Poindexter

#include "Square.h"
#include <iostream>
using namespace std;

int main()
{
    //instantiate Square objects
    Square wholePizza;
    Square pizzaSlice;
    //declare variables
    double wholeSide = 0.0;
    double sliceSide = 0.0;
    double wholeArea = 0.0;
    double sliceArea = 0.0;
    double numSlices = 0.0;

    //get side measurements
    cout << "Whole pizza side measurement (inches): ";
    cin >> wholeSide;
    cout << "Pizza slice side measurement (inches): ";
    cin >> sliceSide;

    //assign side measurements to Square objects
    wholePizza.setSide(wholeSide);
    pizzaSlice.setSide(sliceSide);

    //calculate areas 
    wholeArea = wholePizza.calcArea();
    sliceArea = pizzaSlice.calcArea();

    //calculate number of slices 
    if(sliceArea > 0.0)
        numSlices = wholeArea / sliceArea;
    //end if
    cout << "Number of slices: " << numSlices << endl;
    return 0; 
}//end main function