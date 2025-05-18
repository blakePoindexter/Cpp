// This example of a for loop is for a pretest loop version that's exit is user-controlled

#include<iostream>
using namespace std;

int main()
{
    const double RATE = .02;
    int sales = 0;
    double commission = 0.0;

    cout << "First salesperson's sales (-1 to stop): "; 
    cin >> sales;


    for(; sales != -1;)
    {
        commission = sales * RATE;

        cout << "Commission: $" << commission << endl << endl;
        cout << "Next salesperson's sales (-1 to stop): ";
        cin >> sales;        
    } //end for
} //end main()