#include <cstdlib>
#include <ctime>
#include "paint.h"
#include <iostream>

using namespace std;

void computerMove(char board[]) {
    int randomIndex;
    while (true) {
        randomIndex = rand() % 9;
        if (board[randomIndex] == '#') {
            board[randomIndex] = 'O';
            break;
        }
    }
}

bool checkWin(char board[], char symbol) {
    int wins[8][3] = {
        {0, 1, 2}, {3, 4, 5}, {6, 7, 8},     // horizontal
        {0, 3, 6}, {1, 4, 7}, {2, 5, 8},     //vertical
        {0, 4, 8}, {2, 4, 6}    //diagonal
    };

    for (int i = 0; i < 8; i++)
    {
        if (board[wins[i][0]] == symbol &&
            board[wins[i][1]] == symbol &&
            board[wins[i][2]] == symbol) {
            return true;
        }
    }

    return false;
}

bool checkDraw(char boards[]) {
    for (int i = 0; i < 9; i++)
    {
        if (boards[i] == '#') return false;
    }
    return true;
}

int main()
{
    char board[9] = { '#', '#', '#', '#', '#', '#', '#', '#', '#' };
    int index;

    srand(time(0));

    while (true) {
        system("cls");

        // drawing
        drawFirstLine(board);
        drawSecondLine(board);
        drawThirdLine(board);

        cout << "Enter a number between 1 and 9: ";
        cin >> index;

        if (index >= 1 && index <= 9) {
            if (board[index - 1] == '#') {
                board[index - 1] = 'X';
                
                //Did the player win?
                if (checkWin(board, 'X')) {
                    system("cls");
                    drawFirstLine(board); drawSecondLine(board); drawThirdLine(board);
                    cout << "\n*****  YOU WIN!  *****\n";
                    system("pause");
                    break;
                }

                if (checkDraw(board)) {
                    system("cls");
                    drawFirstLine(board); drawSecondLine(board); drawThirdLine(board);
                    cout << "\n*****  IT'S A DRAW!  *****\n";
                    system("pause");
                    break;
                }

                computerMove(board);

                //Did the computer win?
                if (checkWin(board, 'O')) {
                    system("cls");
                    drawFirstLine(board); drawSecondLine(board); drawThirdLine(board);
                    cout << "\n*****  COMPUTER WIN!  *****\n";
                    system("pause");
                    break;
                }

                if (checkDraw(board)) {
                    system("cls");
                    drawFirstLine(board); drawSecondLine(board); drawThirdLine(board);
                    cout << "\n*****  IT'S A DRAW!  *****\n";
                    system("pause");
                    break;
                }

            }
            else { 
                cout << "\n";
                cout << "This cage is already occupied";
                cout << "\n\n\n";
                system("pause");
            }
        }
        else {
            cout << "\n";
            cout << "wrong number!!!";
            cout << "\n\n\n";
            system("pause");

            //save mechanic
            cin.clear();
            cin.ignore(10000, '\n');
        }
    }
    return 0;
}