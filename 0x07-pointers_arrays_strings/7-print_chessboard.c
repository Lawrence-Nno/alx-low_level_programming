#include "main.h"

/**
 * print_chessboard - This functions prints a chessboard
 * @a: The array of chess
 * Return: Nth for now
 */

void print_chessboard(char (*a)[8])
{
	unsigned int a, b;

	a = 0;
	while (a < 8)
	{
		b = 0;
		while (b < 8)
		{
			_putchar(a[a][b]);
			b++;
		}
		_putchar('\n');
		a++
	}
}
