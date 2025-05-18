//Hexagon.h - documents the Hexagon class blueprint
//Update: Tested and confirmed to work. Next, a few more shapes and then a final program to utilize all classes.
#include <cmath>

class Hexagon
{
public:
    Hexagon();
    Hexagon(double);
    void setSide(double);
    double getSide();
    double calcArea();
    double calcPerimeter();
private:
    double side;
};

Hexagon::Hexagon()
{
    side = 0.0;
}

Hexagon::Hexagon(double sideLength)
{
    setSide(sideLength);    
}

void Hexagon::setSide(double length)
{
    if (length > 0)
        side = length;
    else
        side = 0.0;
}

double Hexagon::getSide()
{
    return side;
}

double Hexagon::calcArea()
{
    //the formula for the area of a hexagon is kind of crazy, so lets see if I can do it
    double squareRoot3 = sqrt(3);
    double area = (3 * squareRoot3 / 2) * pow(side, 2);
    return area;    
}

double Hexagon::calcPerimeter()
{
    //calculating the perimeter is infinitely more simple than the area
    double perimeter = side * 6;
    return perimeter;

}