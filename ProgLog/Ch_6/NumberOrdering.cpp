// Number Ordering Program: accepts 3 numbers as input and displays the lowest, middle and highest number in order as output.
// Author - Blake Poindexter
// Date - 02/27/2024

#include <iostream>
using namespace std;


int main()
{
    int num1 = 0, num2 = 0, num3 = 0;       //declare variables
    int smallNum = 0, midNum = 0, largeNum = 0;

    cout << "**** Number Ordering Program ****" << endl << endl;    //program start header

    cout << "Enter the first number: " ;  //prompt for first number
    cin >> num1;

    cout << "Enter the second number: "; //prompt for second number
    cin >> num2;

    cout << "Enter the third number: "; //prompt for third number
    cin >> num3;
    cout << endl; // for extra space/formatting purposes

    // start sorting statements and conditions

    //conditons for smallest number
    if(num1 <= num2 && num1 <= num3)
        smallNum = num1;
    else if(num2 <= num1 && num2 <= num3)
        smallNum = num2;
    else
        smallNum = num3;
    //end if for smallest number
    
    //conditons for middle number
    if((num1 <= num2) && (num1 >= num3) || (num1 >= num2) && (num1 <= num3))
        midNum = num1;
    else if((num2 <= num1) && (num2 >= num3) || (num2 >= num1) && (num2 <= num3))
        midNum = num2;
    else
        midNum = num3;
    //end if for middle number

    //conditons for largest number
    if(num1 >= num2 && num1 >= num3)
        largeNum = num1;
    else if(num2 >= num1 && num2 >= num3)
        largeNum = num2;
    else
        largeNum = num3;
    //end if for largest number

    //display results
    cout << "The smallest number: " << smallNum << endl;
    cout << "The middle number: " << midNum << endl;
    cout << "The largest number: " << largeNum << endl;
    cout << endl;
    cout << "*********************************" << endl; // end program footer display
    
    return 0;
} // end main()
//end program