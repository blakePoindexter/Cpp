// Shows key topics regarding multidimensional array with 2 dimensions.
// From Bro Code on YouTube, C++ edition

#include <iostream>
using namespace std;

int main()
{
    string cars[][3] = {{"Mustang", "Escape", "F-150"},
                        {"corvette", "Equinox", "Silverado"},
                        {"Challenger", "Durango", "Ram 1500"}};


    /*
    //To display the different rows together
    //Ford, at row 0
    cout << cars[0][0] << " ";
    cout << cars[0][1] << " ";
    cout << cars[0][2] << "\n";
    //Chevy, at row 1
    cout << cars[1][0] << " ";
    cout << cars[1][1] << " ";
    cout << cars[1][2] << "\n";
    //Dodge, at row 2
    cout << cars[2][0] << " ";
    cout << cars[2][1] << " ";
    cout << cars[2][2] << "\n";
    */
    
    //to get the number of a rows
    int rows = sizeof(cars)/sizeof(cars[0]);
    //to get the number of columns
    int columns = sizeof(cars[0])/sizeof(cars[0][0]);

    //to display the items in arrays
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            cout << cars[i][j] << " ";
        }
        cout << '\n';
    }

    return 0;
}