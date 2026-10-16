#include "paint.h"
#include <iostream>

using namespace std;

void draw_cube(int sizeX, int sizeY) {
	for (int i = 0; i < sizeX; ++i)
	{
		for (int j = 0; j < sizeY; ++j)
		{
			cout << "#";
		}
		cout << "\n";
	}
}

void partition(int sizeX, int sizeY) {
	for (int i = 0; i < sizeX; ++i)
	{
		for (int j = 0; j < sizeY; ++j)
		{
			cout << "#";
		}
		cout << "\n";
	}
}




void drawLineOne() {
	draw_cube();
	partition();
}