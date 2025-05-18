//Lab8-4.cpp - displays a pattern of numbers
//Created/revised by Blake Poindexter on 03/13/2024

#include <iostream>
using namespace std;

int main()
{
	int maxRows = 0;  // initialize variable

    cout << "How many rows? ";  //moved prompt for input here after variable initialization
	cin >> maxRows;
	

	for (int row = 1; row <= maxRows; row += 1)  //outer loop - changed 2 to 1 
	{
		for (int col = 1; col <= row; col += 1) // inner loop - changed 3 to 1
			cout << col;
		// end for
		cout << endl;
	} // end for

	
	return 0;
}	// end of main function