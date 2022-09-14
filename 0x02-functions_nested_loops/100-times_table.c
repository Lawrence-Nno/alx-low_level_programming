#include "main.h"

/**
 * print_times_table - Prints time table starting from 0
 *@n: n's timestable
 *
 * Return: nth ro return for now
 */
void print_times_table(int n)
{
	int num, mul, prd;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');

			for (mul = 1; mul <= n; mul++)
			{
				_putchar(',');
				_putchar(' ');

				prd = num * mul;

				if (prod <= 99)
					_putchar(' ');
				if (prd <= 9)
					_putchar(' ');

				if (prod >= 100)
				{
					_putchar((prd / 100) + '0');
					_putchar (((prd / 10)) % 10 + '0');
				}
				else if (prod <= 99 && prod >= 10)
				{
					_putchar((prd / 10) + '0');
				}
				_putchar ((prd % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
