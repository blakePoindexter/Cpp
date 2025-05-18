//Triangle.h - Header file for the Triangle class; for practice with C++ classes
// Blake Poindexter

class Triangle
{
public:
    Triangle();
    Triangle(double, double);
    void setBase(double);
    void setHeight(double);
    double getBase();
    double getHeight();
    double calcArea();
private:
    double base;
    double height;    
    const double HALF = 0.5;
};

Triangle::Triangle()
{
    base = 0.0;
    height = 0.0;
}

Triangle::Triangle(double inBase, double inHeight)
{
    setBase(inBase);
    setHeight(inHeight);        
}

void Triangle::setBase(double length)
{
    if (length > 0)
        base = length;
    else
        base = 0.0;
}

void Triangle::setHeight(double length)
{
    if (length > 0)
        height = length;
    else
        height = 0.0;
}

double Triangle::getBase()
{
    return base;
}

double Triangle::getHeight()
{
    return height;
}

double Triangle::calcArea()
{
    double area = HALF * base * height;
    return area;
}


