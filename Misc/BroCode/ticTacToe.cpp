//UNFINISHED***
#include<iostream>
#include<ctime>
using namespace std;

void drawBoard(char *spaces);
void playerMove(char *spaces, char player);
void computerMove(char *spaces, char computer);
void checkWinner(char *spaces, char player, char computer);
void checkTie(char *spaces);

int main()
{
    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player = 'X';
    char computer = 'O';
    bool running = true;

    drawBoard(spaces);


    return 0;
}

void drawBoard(char *spaces)
{
    cout << "     |     |     " << '\n';
    cout << "  " << spaces[0] << "   |  " << spaces[1] << "   |  " << spaces[2] << "  " << '\n';
}


void playerMove(char *spaces, char player)
{

}


void computerMove(char *spaces, char computer)
{

}


bool checkWinner(char *spaces, char player, char computer)
{

}


bool checkTie(char *spaces)
{

}