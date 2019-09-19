#include <iostream>
#include "Grid.h"
using namespace std;

int main()
{
	int rows = 0;
	int cols = 0;
	int bombs = 0;
	char box = 0x80;
	cout << box << endl;
	cout << "Welcome to Minesweeper!" << endl;
	cout << "How big would you like the grid to be? Enter dimensions: ";
	cout << "Rows: ";
	cin >> rows;
	cout << "Columns: ";
	cin >> cols;
	cout << "How many bombs do you want in your grid?" << endl;
	cout << "(Recommended less than or equal to " << rows * cols / 4 << "): ";
	cin >> bombs;
	Grid myGrid(rows, cols);
	myGrid.display();
	system("pause");
	return 0;
}