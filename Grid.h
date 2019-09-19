#pragma once
#include <iostream>
using namespace std;
class Grid
{
public:
	Grid(int row, int cols)
	{
		rows = row;
		columns = cols;
		myGrid = new char *[rows];
		for (int i = 0; i < rows; i++)
		{
			myGrid[i] = new char[cols];
		}
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				myGrid[i][j] = 254;
			}
		}
	}
	void setMines(int mines);
	void setSpaces();
	void display();
	~Grid() { }

private:
	char** myGrid;
	int rows;
	int columns;
};
