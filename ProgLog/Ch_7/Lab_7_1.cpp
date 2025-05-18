//Lab7-1.cpp - calculates the average number of text
//messages sent each day for 7 days
//Created/revised by Blake Poindexter on 03/09/2024

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{	
	int day = 1;
	int totalTexts = 0;	
    int dailyTexts = 0;     // initialize variables
    double average = 0.0;
 
	while (day < 8)  //change to while loop from for loop
	{
		cout << "How many text messages did you send on day "       // prompt for amount of text messages 
			<< day << "? ";
		cin >> dailyTexts;  // store messages value
		totalTexts += dailyTexts;  // accumulate texts
        day += 1;  // increment counter
	}	//end for

	average = static_cast<double>(totalTexts) / (day - 1);  //compute average
	cout << fixed << setprecision(0);   //format output
	cout << endl << "You sent approximately " 
			<< average << " text messages per day." << endl;    // output to user
    return 0;
}   //end of main function