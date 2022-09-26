#include "main.h"

/**
 * print_chessboard - This functions prints a chessboard
 * @a: The array of chess
 * Return: Nth for now
 */

void print_chessboard(char (*a)[8])
{
	unsigned int m, n;

	m = 0;
	while (m < 8)
	{
		n = 0;
		while (n < 8)
		{
			_putchar(a[m][n]);
			n++;
		}
		_putchar('\n');
		m++;
	}
}
