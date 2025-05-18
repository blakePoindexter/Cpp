// Circle.h - header file for the Circle class: for practice with C++ classes
// Blake Poindexter

//declaration section
class Circle
{
public:
    Circle();
    Circle(double);
    void setRadius(double);
    double getRadius();
    double calcArea();
    double calcCircum();
private:
    double radius;
    const double PI = 3.14159;
};

// implementation section
Circle::Circle()
{
    radius = 0.0;
} //end of default constructor

Circle::Circle(double num)
{
    setRadius(num);
} //end of overloaded constructor 

//sets the radius
void Circle::setRadius(double inRad)
{
    if (inRad > 0.0)
        radius = inRad;
    else
        radius = 0.0;
    //end if
} // end of setRadius method

//returns the radius
double Circle::getRadius()
{
    return radius;
} // end of getRadius method

//calculate area
double Circle::calcArea()
{
    return radius * radius * PI;
} //end of calcArea method

//calculates circumference
double Circle::calcCircum()
{
    return 2 * radius * PI;
} //end of calcCircum method