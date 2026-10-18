#include <cstdlib> 
#include "paint.h"
#include <iostream>

using namespace std;

int main()
{
    char board[9] = { '#', '#', '#', '#', '#', '#', '#', '#', '#' };
    int index;

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
            }
            else { 
                cout << "\n";
                cout << "This cage is already occupied";
                cout << "\n\n\n";
                system("pause");
            }
        }
    }
    return 0;
}