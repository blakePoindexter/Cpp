//Lab8-6.cpp - displays a store's quarterly (three month) sales
//Created/revised by Blake Poindexter on 4-19-2024

#include <iostream>
using namespace std;

int main()
{
	int month = 1;
	double sales = 0.0;		//converted to double for monetary values
	double totalSales = 0.0;

	//get an unknown number of sales amounts for each of three months
	while (month <= 3)  // added = to have the loop process one additional iteration. could also have zeroed the month variable
	{
		cout << "First sales amount for month " << month << " (negative number to end): ";
		cin >> sales;
		while (sales >= 0)
		{
			totalSales += sales;
			cout << "Next sales amount for month " << month << " (negative number to end): ";
			cin >> sales;
		}	//end while
		cout << endl;
		month += 1;
	}	//end while

	cout << "Total sales for the store: $" << totalSales << endl;
	return 0;
}	//end of main function