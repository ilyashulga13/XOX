#include "paint.h"
#include <iostream>

using namespace std;

void drawBoard(char board[], int index) {
	cout << ' ' << board[index] << ' ' << "|" << ' ' << board[index + 1] << ' ' << "|" << ' ' << board[index + 2] << ' ' << '\n';
}

void drawFirstLine(char board[]) {
	drawBoard(board, 0);
	cout << "---+---+---\n";
}

void drawSecondLine(char board[]) {
	drawBoard(board, 3);
	cout << "---+---+---\n";
}

void drawThirdLine(char board[]) {
	drawBoard(board, 6);
}