#include "main.h"

/**
 * more_numbers - This function prints numbers 0-14 ten times
 * Return: No return for this function
 */

void more_numbers(void)
{
	int i = 0;
	int n;

	while (i < 10)
	{
		for (n = '0'; n <= '14'; n++)
		{
			if (n > 9)
			{
				_putchar('n' + n % 10);
			}
			else
			{
				_putchar('n');
			}
			_putchar('\n');
		}
	}
}
