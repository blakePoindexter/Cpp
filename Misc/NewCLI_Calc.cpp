// An improved version of the Command Line Calculator
// Uses paramterized functions rather than void functions.

#include <iostream>
using namespace std;

double addition(double, double);
double subtraction(double, double);
double multiplication(double, double);
double division(double, double);

int main()
{
    //initialize variables
    int x = 0;
    double num1 = 0.0;
    double num2 = 0.0;
    double answer = 0.0;
    char userChoice = ' ';

    //take and store user numbers
    cout << "What is the first number?: ";
    cin >> num1;
    cout << "What is the second number?: ";
    cin >> num2;

    //make asterisk border
    do{
        cout << "*";
        x++;
    }while (x < 30);
    cout << endl << endl;

    //begin program
    cout << "What would you like to do?" << endl;
    cout << "A - Addition" << endl;
    cout << "S - Subtraction" << endl;
    cout << "M - Multiplication" << endl;
    cout << "D - Division" << endl;
    cin >> userChoice;
    userChoice = toupper(userChoice);   
  //make user input capitalized in case they input a lowercase letter

    switch (userChoice)     //switch structure for function calls to arithmetic functions
    {
    case 'A':
        answer = addition(num1, num2);
        break;
    case 'S':
        answer = subtraction(num1, num2);
        break;
    case 'M':
        answer = multiplication(num1, num2);
        break;
    case 'D':
        answer = division(num1, num2);
        break;    
    default:
        cout << "Invalid option!";
        break;
    }

    cout << '\n' << '\n';  //for formatting in extra space
    cout << "The answer is " << answer << endl;
    cout << "Goodbye!" << endl << endl;
    
    x = 0;
    //make asterisk border
    do{
        cout << "*";
        x++;
    }while (x < 30);
    cout << endl << endl;
    //end program

    return 0;
}
double addition(double firstNum, double secondNum)
{
    double answer = 0.0;
    answer = firstNum + secondNum;
    return answer;
}
double subtraction(double firstNum, double secondNum)
{
    double answer = 0.0;
    answer = firstNum - secondNum;
    return answer;
}
double multiplication(double firstNum, double secondNum)
{
    double answer = 0.0;
    answer = firstNum * secondNum;
    return answer;
}
double division(double firstNum, double secondNum)
{
    double answer = 0.0;
    answer = firstNum / secondNum;
    return answer;
}
