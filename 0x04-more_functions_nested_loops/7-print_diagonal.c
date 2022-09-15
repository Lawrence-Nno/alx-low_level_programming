#include "main.h"

/**
 * print_diagonal - this function prints diagonal line using \
 * @n: is the number of \ to be printed
 * @row: the row of the diagonal
 * @col: the column
 * Return: no return for mow
 */

void print_diagonal(int n)
{
	int row;
	int col;

	if (n > 0)
	{
		for (row = 0; row < n; row++)
		{
			for (col = 0; col <= row; col++)
			{
				if (row == col)
				{
					_putchar(92);
				}
				else
				{
					_putchar(32);
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
