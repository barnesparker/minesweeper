#include "Grid.h"

void Grid::setMines(int mines)
{
	int r = 0;
	int c = 0;
	for (int i = 0; i < mines; i++)
	{
		r = rand() % rows;
		c = rand() % columns;
		if (myGrid[r][c] != 'X')
		{
			myGrid[r][c] = 'X';
		}
		else
		{
			i--;
		}
	}
}

void Grid::setSpaces()
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			if (myGrid[i][j] != 'X')
			{
				for (int k = 0; k < 8; k++)
				{

				}
			}
		}
	}
}

void Grid::display()
{
	cout << "   ";
	for (int i = 0; i < columns; i++)
	{
		if (i < 10 && i > 0)
		{
			cout << " ";
		}
		cout << i << " ";
	}
	cout << endl;
	for (int i = 0; i < rows; i++)
	{
		if (i < 10)
		{
			cout << " ";
		}
		cout << i << " ";
		for (int j = 0; j < columns; j++)
		{
			cout << myGrid[i][j] << "  ";
		}
		cout << endl;
	}
}
