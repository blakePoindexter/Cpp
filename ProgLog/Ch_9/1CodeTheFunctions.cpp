// CodeTheFunctions.cpp - Allows user to enter numbers and performs different arithmetic on them using functions
// Author - Blake Poindexter
// Date - 04/22/2024

#include <iostream>
#include <cmath>
using namespace std;

// function prototypes
void addFun();
void subFun();  
void multFun();
void divFun();
void powerFun();
void sqrtFun();

int main()
{
    //declare local variables
    char userChoice = ' ';
    int count = 0;

    cout << "    ***Code The Functions***  " << endl;
    do{ // start do while loop for dash border
        cout << "-";
        count += 1;
    }while (count <= 30); // end do while loop for border
    cout << '\n' << '\n';
    cout << "Hello" << endl;

    do{        
        cout << "\nPlease pick an option: " << endl;   //initial menu; may wrap with while loop
        cout << "A - Addition " << endl;
        cout << "S - Subtraction " << endl;
        cout << "M - Multiplication " << endl;
        cout << "D - Division " << endl;
        cout << "P - Raise to a power" << endl;
        cout << "R - Square Root" << endl;
        cout << "X - Quit\n";
        cin >> userChoice;
        userChoice = toupper(userChoice); // cast user's choice to uppercase for switch structure       

        switch (userChoice)
        {
            case 'A':
                addFun();   // addition function call
                break;
            case 'S':
                subFun();  // subtraction function call
                break;
            case 'M':
                multFun();  // multiplication function call
                break;
            case 'D':
                divFun(); // division function call
                break;
            case 'P':
                powerFun(); // raise to power function call
                break;
            case 'R':
                sqrtFun(); // square root function call
                break;
            case 'X':
                break;       
            default:
                cout << "\nInvalid option!\n" << endl;
                break;
        }

    }while (userChoice != 'X');

    count = 0;
    do{ // start do while loop for dash border
        cout << "-";
        count += 1;
    }while (count <= 30); // end do while loop for border
    cout << '\n' << '\n';
    
    cout << "Goodbye!\n" << endl;

    return 0;
}// end main


void addFun() 
{
    //declare local variables
    int num1 = 0;
    int num2 = 0;
    int total = 0;    
    
    cout << "What is the first number? " << endl;
    cin >> num1;
    cout << "\nWhat is the second number? " << endl;
    cin >> num2;
    total = num1 + num2;
    cout  << num1 << " + " << num2 << " = " << total << endl;        
} // end Addition function

void subFun() 
{
    //declare local variables
    int num1 = 0;
    int num2 = 0;
    int total = 0;    
    
    cout << "What is the first number? " << endl;
    cin >> num1;
    cout << "\nWhat is the second number? " << endl;
    cin >> num2;
    total = num1 - num2;
    cout  << num1 << " - " << num2 << " = " << total << endl;        
} // end Subtraction function

void multFun() 
{
    //declare local variables
    int num1 = 0;
    int num2 = 0;
    int total = 0; 
    
    cout << "What is the first number? " << endl;
    cin >> num1;
    cout << "\nWhat is the second number? " << endl;
    cin >> num2;
    total = num1 * num2;
    cout  << num1 << " * " << num2 << " = " << total << endl;    
} // end Multipliction function

void divFun() 
{
    //declare local variables
    int num1 = 0;
    int num2 = 0;
    int total = 0;    
    
    cout << "What is the first number? " << endl;
    cin >> num1;
    cout << "\nWhat is the second number? " << endl;
    cin >> num2;
    total = num1 / num2;
    cout  << num1 << " / " << num2 << " = " << total << endl;
    } // end Division function

void powerFun()
{
    //declare local variables
    int num1 = 0;
    int num2 = 0;
    int answer = 0;

    cout << "What is the first number? " << endl;
    cin >> num1;
    cout << "\nWhat is the second number? " << endl;
    cin >> num2;
    answer = pow(num1, num2);
    cout  << num1 << " raised to the power of " << num2 << " = " << answer << endl;        
} // end Power function

void sqrtFun() 
{
    //declare local variables
    int num1 = 0;
    int num2 = 0;
    int sqr1 = 0;
    int sqr2 = 0;
    int answer = 0;  
    
    cout << "What is the first number? " << endl;
    cin >> num1;
    sqr1 = sqrt(num1);
    cout << "\nWhat is the second number? " << endl;
    cin >> num2;
    sqr2 = sqrt(num2);
    cout  << "The square root of " << num1 << " = " << sqr1 << endl;
    cout  << "The square root of " << num2 << " = " << sqr2 << endl; 
} // end Square Root function