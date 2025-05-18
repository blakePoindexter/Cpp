//Modified Chapton Company.cpp - gets and displays order amounts

#include <iostream>
using namespace std;

void displayArray(int nums[4][3]);

int main()
{
    int orders[4][3] = {0};

    //store data in the array
    for (int region = 0; region < 4; region += 1)
        for (int month = 0; month < 3; month += 1)
        {
            cout << "Region " << region + 1 << ", Month "
                << month + 1 << " orders: ";
            cin >> orders[region][month];
        } //end for
    //end for

    displayArray(orders);
    return 0;
}

//function definition
void displayArray(int nums[4][3])
{
    cout << endl << "Array contents:" << endl;
    for (int region =0; region < 4; region += 1)
    {
        cout << "Region " << region + 1
             << ": " << endl;
        for (int month = 0; month < 3; month += 1)
            cout << "       Month " << month + 1
                 << ": " << nums[region][month]
                 << endl;
        //end for
    } //end for
} // end of displaysArray function