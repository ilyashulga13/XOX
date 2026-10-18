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

                computerMove(board);

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