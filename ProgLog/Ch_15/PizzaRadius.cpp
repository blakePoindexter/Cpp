//implements the Circle class
//Blake Poindexter

#include <iostream>
#include <iomanip>
#include "Circle.h"
using namespace std;

int main() 
{
    //instantiate objects
    Circle pizza;
    Circle mirror;

    //declare variables
    double pizzaSurface = 0.0;
    double pizzaPerimeter = 0.0;
    double pizzaRadius = 0.0;
    double mirrorSurface = 0.0;
    double mirrorPerimeter = 0.0;
    double mirrorRadius = 0.0;

    cout << "Radius of pizza >> ";
    cin >> pizzaRadius;
    cout << "Radius of mirror >> ";
    cin >> mirrorRadius;

    pizza.setRadius(pizzaRadius);
    pizzaSurface = pizza.calcArea();
    pizzaPerimeter = pizza.calcCircum();

     mirror.setRadius(mirrorRadius);
     mirrorSurface  = mirror.calcArea();
     mirrorPerimeter  = mirror.calcCircum();

     cout << fixed << setprecision(2);
     cout << "The surface area of a pizza with a radius of " << pizza.getRadius() << endl;
     cout << " is " << pizzaSurface << " and the the circumference is " << pizzaPerimeter << endl;
     cout << "The surface area of a mirror with a radius of " << mirror.getRadius() << endl;
     cout << " is " << mirrorSurface << " and the the circumference is " << mirrorPerimeter << endl;
     
    return 0;
}