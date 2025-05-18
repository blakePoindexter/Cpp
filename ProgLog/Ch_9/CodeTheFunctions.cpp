// CodeTheFunctions.cpp - A program that allows the user to select two numbers to perform arithemtic on
// Author - Blake Poindeter
// Date - 4/23/2024

#include<iostream>
#include<cmath>
using namespace std;

int addFunc(int);
int subFunc(int);
int multFunc(int);  //function prototypes of value-returning functions
int divFunc(int);
void sqrtFunc(int);   //sqrt() returns a double value type
int powerFunc(int);

int main()
{
    //declare local variables
    char userChoice = ' ';
    int count = 0;
    int num1 = 0;
    int answer = 0;

    cout << "    ***Code The Functions***  " << endl;
    do{ // start do while loop for dash border
        cout << "-";
        count += 1;
    }while (count <= 30); // end do while loop for border
    cout << '\n' << '\n';
    
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

        cout << "What is the first number? \n";
        cin >> num1;      

        switch (userChoice)
        {
            case 'A':
                answer = addFunc(num1);   // addition function call
                cout << "\nAnswer: " << answer << endl;
                break;
            case 'S':
                answer = subFunc(num1);  // subtraction function call
                cout << "\nAnswer: " << answer << endl;
                break;
            case 'M':
                answer = multFunc(num1);  // multiplication function call
                cout << "\nAnswer: " << answer << endl;
                break;
            case 'D':
                answer = divFunc(num1); // division function call
                cout << "\nAnswer: " << answer << endl;
                break;
            case 'P':
                answer = powerFunc(num1); // raise to power function call
                cout << "\nAnswer: " << answer << endl;
                break;
            case 'R':
                sqrtFunc(num1); // square root function call; nothing returned because both numbers are displayed in the function
                break;
            case 'X':
                break;       
            default:
                cout << "\nInvalid option!" << endl;
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

int addFunc(int num1)
{
    int funcAnswer = 0;
    int num2 = 0;
    cout << "What is the second number: \n";
    cin >> num2;
    funcAnswer = num1 + num2;
    return funcAnswer;
}

int subFunc(int num1)
{
    int funcAnswer = 0;
    int num2 = 0;
    cout << "What is the second number: \n";
    cin >> num2;
    funcAnswer = num1 - num2;
    return funcAnswer;
}

int multFunc(int num1)
{
    int funcAnswer = 0;
    int num2 = 0;
    cout << "What is the second number: \n";
    cin >> num2;
    funcAnswer = num1 * num2;
    return funcAnswer;
}

int divFunc(int num1)
{
    int funcAnswer;
    int num2 = 0;
    cout << "What is the second number: \n";
    cin >> num2;
    funcAnswer = num1 / num2;
    return funcAnswer;
}

void sqrtFunc(int num1)
{
    int funcAnswer1 = 0;
    int funcAnswer2 = 0;
    int num2 = 0;
    cout << "What is the second number: \n";
    cin >> num2;
    funcAnswer1 = sqrt(num1);
    funcAnswer2 = sqrt(num2);
    cout << "\nFirst num: " << funcAnswer1 << endl;
    cout << "Second num: " << funcAnswer2 << endl;
}

int powerFunc(int num1)
{
    int funcAnswer = 0;
    int num2 = 0;
    cout << "What is the second number: \n";
    cin >> num2;
    funcAnswer = pow(num1, num2); 
    return funcAnswer;
}