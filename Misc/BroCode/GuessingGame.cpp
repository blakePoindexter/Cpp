// Guessing Game Program 
// Blake Poindexter
// 03/09/2024
#include<iostream>
using namespace std;

int main()
{
    int num = 0;    //declare variables
    int guess = 0;
    int tries = 0;

    srand(time(NULL));
    num = (rand() % 100) + 1;   //setup random number generator

    //begin game
     cout << "****** NUMBER GUESSING GAME ******\n";
    do{
        cout << "Enter your guess (1 - 100): ";
        cin >> guess;
        tries++;

        if(guess < num)
        {
            cout << "Too low!\n";
        }
        else if(guess > num)
        {
            cout << "Too high!\n";
        }
        else
        {
            cout << "CORRECT! Number of tries: " << tries << '\n';
        }
           
    }while(guess != num);

    cout << "**********************************\n";

    return 0;
}