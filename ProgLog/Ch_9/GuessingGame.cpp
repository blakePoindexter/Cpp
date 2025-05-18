//Guessing Game.cpp - number guessing game
//Created/revised by Blake Poindexter on 04/16/2024

#include <iostream>
#include <ctime>
//#include <cstdlib>
using namespace std;

int main()
{
	int randomNumber = 0;   //initialize variables
	int numberGuess = 0;

	//generate a random number from 1 through 10
	srand(static_cast<int>(time(0)));
	randomNumber = 10 + rand() % (10 - 1 + 1); //changed 1 to 10 to add 10 to random number generated

	//get first guess from user
	cout << "Guess a number from 10 through 20: ";
	cin >> numberGuess;

	while (numberGuess != randomNumber)
	{
		cout << "Sorry, guess again: ";
		cin >> numberGuess;
	}	//end while

	cout << endl << "Yes, the number is "
		<< randomNumber << "." << endl;
	return 0;
}   //end of main function