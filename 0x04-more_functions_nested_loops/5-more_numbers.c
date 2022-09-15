#include "main.h"

/**
 * more_numbers - This function prints numbers 0-14 ten times
 * Return: No return for this function
 */

void more_numbers(void)
{
	int i;
	int n;
	int m;

	for (i = 0; i <= 9; i++)
	{
		for (n = 48; n <= 49; n++)
		{
			for (m = 48; m <= 57; m++)
			{
				if (n != 48)
				{
					_putchar(n);
				}
				_putchar(m);
				if (n == 49 && m == 52)
				{
					break;
				}
			}
		}
		_putchar('\n');
	}
}
