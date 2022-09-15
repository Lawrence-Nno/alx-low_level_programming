#include "main.h"

/**
 * print_diagonal - this function draws a diagonal line
 * @n: the number of lines to print
 * Return: Nothing to return
 */

void print_diagonal(int n)
{
	int o;
	int p;

	if (n > 0)
	{
		for (p = 1; p <= n; p++)
		{
			for (o = 1; o <= p; o++)
			{
				if (o != 1)
					_putchar(' ');
				if (o == p)
				{
					_putchar('\\');
					_putchar('\n');
				}
			}
		}
	}
	else
		_putchar('\n');
}
