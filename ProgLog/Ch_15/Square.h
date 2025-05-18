// Square.h - header file for the Square class
// Blake Poindexter

//declaration section
class Square
{
public:
    Square();
    Square(double);
    void setSide(double);
    double getSide();
    double calcArea();
private:
    double side;
};

// implementation section
Square::Square()
{
    side = 0.0;
} //end of default constructor

Square::Square(double num)
{
    setSide(num);
} //end constructor 

void Square::setSide(double sideValue)
{
    if (sideValue > 0.0)
        side = sideValue;
    else
        side = 0.0;
    //end if
} // end of setSide method

double Square::getSide()
{
    return side;
} // end of getSide method

double Square::calcArea()
{
    return side * side;
} //end of calcArea method