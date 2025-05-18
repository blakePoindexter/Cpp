//Bonus.cpp

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() 
{
    const double RATE = 0.1;
    string sales = "";
    string currentChar = "";
    int sub = 0;
    double bonus = 0.0;

    cout << "Sales: ";
    getline(cin, sales);

    //remove all characters except numbers
    while (sub < sales.length())
    {
        currentChar = sales.substr(sub, 1);
        if (currentChar < "0" || currentChar > "9")
            sales.erase(sub, 1);
        else
            sub += 1;
        //end if
    }   //end while
    //calculate bonus
    bonus = stod(sales) * RATE; //stod = string to double

    //display sales and bonus
    cout << fixed << setprecision(2) << endl;
    cout << "Sales amount: " << sales << endl;
    cout << "Bonus amount: " << bonus << endl;
    return 0;
}//end of main function