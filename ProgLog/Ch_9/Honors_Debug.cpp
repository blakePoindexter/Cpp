//SwatTheBugs26.cpp - displays the miles per gallon
//Created/revised by Blake Poindexter on 04/16/2024

#include <iostream>
#include <iomanip>
using namespace std;

//function prototype
double calcMpg(double, double); //needed because function definition occurs after main

int main()
{
	double miles = 0.0;
	double gallons = 0.0;   //variables
	double milesPerGal = 0.0;

	cout << "Enter the number of miles: ";  //prompt for the miles value
	cin >> miles;
	cout << "Enter number of gallons: ";    //prompt for the gallons value
	cin >> gallons;

	milesPerGal = calcMpg(miles, gallons);  //calculates and returns miles per gallon value

	cout << fixed << setprecision(1);   //formats the output to one degree of precision
	cout << "Miles per gallon: " << milesPerGal << endl;    //displays miles per gallon
	return 0;
}	//end of main function

//*****function definitions*****
double calcMpg(double distance, double galUsed) //function header
{
	double mpg = 0.0;
	mpg = distance / galUsed;   //calculates mpg
	return mpg; //returns mpg to invoking function call
}	//end of calcMpg function