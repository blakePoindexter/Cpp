#include<iostream>
using namespace std;

int main()
{
    int age = 0;
    char registered = ' ';
    // get age
    cout << "Enter your age: ";
    cin >> age;

    if(age >= 18)
    {
        cout << "Registered to vote (Y/N)?: ";
        cin >> registered;
        if(toupper(registered) == 'Y')
        {
            cout << "You may vote." << endl;
        }
        else
        {
            cout << "You must register to vote" << endl;
        }
    }
    else
    {
        cout << "You are too young to vote." << endl;
    }
    
    return 0;
}
