// Social.cpp - displays the number of people whose
// Facebook time exceeds a specific number of minutes
// Created by Blake poindexter on 4/20/24

#include <iostream>
using namespace std;

int main()
{
    int pollResults[25] = { 35, 120, 75, 60, 20, 
                            25, 15, 90, 85, 35,
                            60, 15, 10, 25, 60,
                            100, 90, 10, 120, 5,
                            40, 70, 30, 25, 5 };
    int minutes = 0;
    int numOver = 0;

    cout << "Search for minutes over: ";
    cin >> minutes;

    // search the array
    for (int sub = 0; sub < 25; sub += 1)
        if(pollResults[sub] > minutes)
            numOver += 1;
        // end if   
    // end for

    cout << endl << "Number who spend more than " << minutes << " minutes " << endl;
    cout << "per day on Facebook: " << numOver << endl;
    
    return 0;
}