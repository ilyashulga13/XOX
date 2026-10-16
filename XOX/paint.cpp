#include "paint.h"
#include <iostream>

using namespace std;

void draw_row(int sizeY) {
	for (int i = 0; i < sizeY; i++)
		cout << "#";
}

void draw_cube(int sizeX, int sizeY) {
	for (int i = 0; i < sizeX; i++)
	{
		for (int j = 0; j < sizeY; j++)
		{
			cout << "#";
		}
		cout << "\n";
	}
}

void draw_partition(int sizeX, int sizeY) {
	for (int i = 0; i < sizeX; i++)
	{
		cout << "\n";
	}
}

void drawLineOne(int sizeX, int sizeY) {
	for (int i = 0; i < sizeX; i++)
	{
		draw_row(sizeY);
		cout << "|";

		draw_row(sizeY);
		cout << "|";
		
		draw_row(sizeY);
		cout << "\n";
	}
	for (int j = 0; j < sizeX * 6.25; j++) {
		cout << "-";
	}
}

void drawLineTwo(int sizeX, int sizeY) {
	cout << "\n";
	for (int i = 0; i < sizeX; i++)
	{
		draw_row(sizeY);
		cout << "|";

		draw_row(sizeY);
		cout << "|";

		draw_row(sizeY);
		cout << "\n";
	}
	for (int j = 0; j < sizeX * 6.25; j++) {
		cout << "-";
	}
}

void drawLineTree(int sizeX, int sizeY) {
	cout << "\n";
	for (int i = 0; i < sizeX; i++)
	{
		draw_row(sizeY);
		cout << "|";

		draw_row(sizeY);
		cout << "|";

		draw_row(sizeY);
		cout << "\n";
	}
}