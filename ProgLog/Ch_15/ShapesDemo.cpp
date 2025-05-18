#include "Circle.h"
#include "Square.h"
#include "Triangle.h"
#include "Hexagon.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    Circle pie;
    double pieSize = 0.0;
    double pieRadius = 0.0;
    Triangle pizzaSlice;
    double pizzaSize = 0.0;
    double sliceLength = 0.0;
    Square patio;
    Hexagon stopSign;
    


    cout << "What is the size pie you want? ";
    cin >> pieSize;
    pieRadius = pieSize / 2;
    pie.setRadius(pieRadius);

    cout << "What size of pizza would you like? ";
    cin >> pizzaSize;
    sliceLength = pizzaSize / 2;
    pizzaSlice.setHeight(sliceLength);

}