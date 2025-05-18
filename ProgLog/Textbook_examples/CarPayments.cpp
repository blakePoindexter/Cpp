//TryThis11.cpp - displays two monthly car payments
//Created/revised by: Blake Poindexter on 5/18/2025

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// Function prototypes
double getPayment(int, double, int);
void displayPayment(double);

int main()
{
    //declare variables
    int carPrice = 0; 
    int rebate = 0;
    int term = 0;
    double creditRate = 0.0;
    double dealerRate = 0.0;
    double dealerPayment = 0.0;
    double creditPayment = 0.0;
    
    //get user input
    cout << "Car price (after any trade-in): ";
    cin >> carPrice;
    cout << "Rebate: ";
    cin >> rebate;
    cout << "Credit union rate: ";
    cin >> creditRate;
    cout << "Dealer rate: ";
    cin >> dealerRate;
    cout << "Term (in years): ";
    cin >> term;

    //call function to calculate payments
    creditPayment = getPayment(carPrice - rebate, creditRate / 12, term * 12);
    dealerPayment = getPayment(carPrice, dealerRate / 12, term * 12);

    //display payments
    cout << fixed << setprecision(2) << endl;
    cout << "Credit union payment: $";
    displayPayment(creditPayment);
    cout << endl;
    cout << "Dealer payment: $";
    displayPayment(dealerPayment);
    cout << endl;

    //system("pause");
    return 0;
} // End of main

//*******Function definitions*******/
double getPayment(int prin, double rate, int months)
{
    //calculates and returns a monthly payment
    double monthPay = 0.0;
    monthPay = prin * monthRate / (1 - pow(1 + monthRate, -months));
    return monthPay;
} // End of getPayment function

void displayPayment(double mnthlyPay)
{
    //displays a payment
    cout << mnthlyPay;
} // End of displayPayment function