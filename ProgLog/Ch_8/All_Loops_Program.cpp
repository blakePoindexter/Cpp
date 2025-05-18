// All Loops Program - uses only loops to display designs
// Author - Blake Poindexter
// Date - 03/14/2024

using namespace std;
#include<iostream>

int main()
{
    int count = 1;  // initialize counter
    do  // start do while loop for asterisk border
    {
        cout << "*";
        count += 1;
    } while (count <= 30); // end do while loop 

    cout << "\n\n\n";   // add newlines to clean up formatting

    cout << "Creating the Chart Using Loops\n"; //chart begin 
    cout << '\n';

    int x = 1;
    while (x <= 5)  // while loop for multiples chart
    {
        for(int num = 1; num <= 5; num += 1)
        {
            cout << (num * x) << " ";  // output multiples chart
        } // end for  
        cout << '\n';
        x += 1; // while counter        
    } // end while   

    cout << "\n\n\n"; // add newline space

    // extra credit design
    x = 1;
    while (x <= 10)
    {
        for(int num = 1; num <= x; num += 1)
        {
            cout << "*";
        } // end for
        cout << '\n';
        x += 1;
    } // end while    

    cout << "\n\n\n"; // add newline space

    count = 1;
     do  // start do while loop for asterisk border
    {
        cout << "*";
        count += 1;
    } while (count <= 30); // end do while loop 
    cout << '\n';

    return 0;
} // end main