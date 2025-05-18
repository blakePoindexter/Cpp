//Wilson Company program.cpp - displays the pay rate corresponding to the pay.....

#include <iostream>
using namespace std;

int main()
{
    //declare array  and variables
    int codesAndRates[4][2] = {{3, 8}, 
                               {6, 14},
                               {7, 18}, 
                               {9, 20}};

    int payCode = 0;
    int row = 0;

    //get pay code
    cout << "Pay code (3, 6, 7, or 9). " << endl;
    cout << "Enter a negative number to end: ";
    cin >> payCode;

    while (payCode >= 0)
    {
        //search each row, looking for the pay code in the first column
        row = 0;
        while (row <=3 && codesAndRates[row][0] != payCode)
            row += 1;   
        //end while

        //if the py code was found. display the 
        // pay code and the pay rate storied in the 
        // same row as the pay code but in the 
        // secnd column
        if (row <= 3)
            cout << "Pay rate for pay code "
                 << payCode << ": $"
                 << codesAndRates[row][1]
                 << endl << endl;
        else
            cout << "Invalid pay code" << endl << endl;
        // end if

        //get pay code
        cout << "Pay code (3, 6, 7, 9). " << endl;
        cout << "Enter a negative number to end: ";
        cin >> payCode;
    } //end while
    return 0;
} // end main function