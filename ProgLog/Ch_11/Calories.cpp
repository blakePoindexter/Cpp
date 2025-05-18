#include <iostream>
using namespace std;

int main()
{
    int calories[5] = {0};

    //store data in the array
    for (int sub = 0; sub < 5; sub += 1)
    {
        cout << "Calories for day " << sub + 1 << ": ";
        cin >> calories[sub];
    } //end for loop

    //displays the contents of the array 
    cout << endl << "Array content: " << endl;
    for (int sub = 0; sub < 5; sub += 1)
        cout << "Calories for day " << sub + 1 << ": " << calories[sub] << endl;
    //end for loop
    return 0;
}   //end main
