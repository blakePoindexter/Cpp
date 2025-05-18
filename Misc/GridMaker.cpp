// makes a design with the input symbol
// Blake Poindexter

#include<iostream>
using namespace std;

int main()
{
    int maxRows = 0;
    int maxCol = 0;
    char symbol = 'X';

    cout << "How many rows? ";
    cin >> maxRows;
    cout << "How many columns? ";
    cin >> maxCol;
    cout << "What symbol to use? ";
    cin >> symbol;

    for(int row = 1; row <= maxRows; row += 1)
    {
        for(int col = 1; col <= maxCol; col += 1)
        {
            cout << symbol;
        }
        cout << '\n';
    }


    return 0;
}
