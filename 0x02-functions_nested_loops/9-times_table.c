#include "main.h"

/**
 * times_table - This functions prints the 9 timestable
 *
 * Return: Nothing is returned
 */

void times_table(void)
{
	int rows, colum, d;

	for (rows = 0; rows <= 9; rows++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (colum = 1; colum <= 9; colum++)
		{
			d = (rows * colum);
			if ((d / 10) > 0)
			{
				_putchar((d / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((d % 10) + '0');

			if (colum < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
