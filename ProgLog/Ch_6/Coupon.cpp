//Lab_6-3.cpp - displays the price of a pizza 
//Created/revised by Blake Poindexter on 02/26/2024

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	char size = ' ';
	char coupon = ' ';      //declare variables
	double price = 0.0;
	const double COUPON_VALUE = 2.00;
	const double LARGE_PRICE = 12.99;
	const double MED_PRICE = 9.99;

	

	while(size != 'M' || size != 'L') //loop for error checking size variable to either medium or large
	{

		cout << "(M)edium or (L)arge pizza? (Q to quit): ";  //ask for pizza size
		cin >> size;
		size = toupper(size);
		if(size == 'Q')
			break;
		else if (size != 'M' && size != 'L' && size!= 'Q')     //error check for size entry
			cout << "Please enter either M or L. " << endl << endl;  //prompt to enter a valid size value
		else
		{
			cout << "$2 coupon (Y/N)?: ";   // ask for coupon
			cin >> coupon;
			coupon = toupper(coupon);

			if(coupon == 'Y' && size == 'M')    // with coupon for medium pizza
				price = MED_PRICE - COUPON_VALUE;
			else if(coupon == 'Y' && size == 'L')   // with coupon for large pizza
				price = LARGE_PRICE - COUPON_VALUE;
			else if(coupon == 'N' && size == 'M')   // without coupon for medium pizza
				price = MED_PRICE;
			else    // without coupon for large pizza
				price = LARGE_PRICE;

			//end if
			cout << fixed << setprecision(2);   // sets output precision
			cout << "Price: $" << price << endl << endl;    //output price 
		} //end if
	}

	return 0;
}	//end of main function