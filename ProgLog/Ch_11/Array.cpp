// Array.cpp - Just a program to work wih one-dimensional array(s)
// Blake Poindexter
// 4/20/24

#include <iostream>
using namespace std;

void displayArray(int []);
void makeDashes();

int main() 
{
    int numbers[5];
    makeDashes();
    for(int x = 0; x < 5; x += 1)
    {
        cout << "Enter a number: ";
        cin >> numbers[x];
    }
    makeDashes();
    displayArray(numbers);

    return 0;
}

void makeDashes()
{
    int count = 1;
     do  // start do while loop for dash border
    {
        cout << "-";
        count += 1;
    } while (count <= 30); // end do while loop 
    cout << '\n';
}

void displayArray(int numArray[])
{
    int count = 0;
    //numArray.sort();
    while(count < 5)
    {
        cout << "Number " << count + 1 << " is " << numArray[count] << endl;
        count += 1;
    }
    
}