// CommandLineCalc.cpp - This is a project just to get familiar with C++. This program allows the user to 
// choose different options of performing arithmetic with two input numbers.
// Author - Blake Poindexter

#include <iostream>
using namespace std;

void addition();
void Subtraction();
void Multiplication();
void Division();

int main()
{

    int userChoice = 0;
    int count = 0;
    
    do{ // start do while loop for dash border
        cout << "-";
        count += 1;
    }while (count <= 30); // end do while loop for border
    cout << '\n' << '\n';

    cout << "Hello" << endl;
    cout << "Please pick an option number: " << endl;       //initial menu; may wrap with while loop
    cout << "1. Addition " << endl;
    cout << "2. Subtraction " << endl;
    cout << "3. Multiplication " << endl;
    cout << "4. Division " << endl;
    cin >> userChoice;

    switch (userChoice)
    {
        case 1:
            addition();
            break;
        case 2:
            Subtraction();
            break;
        case 3:
            Multiplication();
            break;
        case 4:
            Division();
            break;
        
        default:
            cout << "Invalid option!" << endl;
            break;
    }

    count = 0;
    do{ // start do while loop for dash border
        cout << "-";
        count += 1;
    }while (count <= 30); // end do while loop for border
    cout << '\n' << '\n';
    
    cout << "BYE\n" << "Goodbye!\n" << "Bye!\n" << endl;

    return 0;
}// end main


void addition() 
{
    int num1 = 0;
    int num2 = 0;
    int total = 0;
    char repeat = 'N';
    
    do{
        cout << "What is the first number? " << endl;
        cin >> num1;
        cout << "What is the second number? " << endl;
        cin >> num2;
        total = num1 + num2;
        cout  << num1 << " + " << num2 << " = " << total << endl;
        cout << "Would you like to continue with addition? (Y)es / (N)o: ";
        cin >> repeat;        
    }while(toupper(repeat) == 'Y');
} // end Addition function

void Subtraction() 
{
    int num1 = 0;
    int num2 = 0;
    int total = 0;
    char repeat = 'N';
    
    do{
        cout << "What is the first number? " << endl;
        cin >> num1;
        cout << "What is the second number? " << endl;
        cin >> num2;
        total = num1 - num2;
        cout  << num1 << " - " << num2 << " = " << total << endl;
        cout << "Would you like to continue with addition? (Y)es / (N)o: ";
        cin >> repeat;        
    }while(toupper(repeat) == 'Y');
} // end Subtraction function

void Multiplication() 
{
    int num1 = 0;
    int num2 = 0;
    int total = 0;
    char repeat = 'N';
    
    do{
        cout << "What is the first number? " << endl;
        cin >> num1;
        cout << "What is the second number? " << endl;
        cin >> num2;
        total = num1 * num2;
        cout  << num1 << " * " << num2 << " = " << total << endl;
        cout << "Would you like to continue with addition? (Y)es / (N)o: ";
        cin >> repeat;        
    }while(toupper(repeat) == 'Y');
    
} // end Multiplication function

void Division() 
{
    int num1 = 0;
    int num2 = 0;
    int total = 0;
    char repeat = 'N';
    
    do{
        cout << "What is the first number? " << endl;
        cin >> num1;
        cout << "What is the second number? " << endl;
        cin >> num2;
        total = num1 / num2;
        cout  << num1 << " / " << num2 << " = " << total << endl;
        cout << "Would you like to continue with addition? (Y)es / (N)o: ";
        cin >> repeat;        
    }while(toupper(repeat) == 'Y');
} // end Division function
