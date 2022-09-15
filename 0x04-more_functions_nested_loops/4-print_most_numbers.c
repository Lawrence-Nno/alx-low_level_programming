#include "main.h"

/**
 * print_most_numbers - This function prints numbers excluding 2 and 4
 * Return: no return for now
 */

void print_most_numbers(void)
{
	int x;

	for (x = '0'; x <= 9; x++)
		if (x != '2' && x != '4')
		{
			_putchar(x);
		}
		else
		{
		}
	_putchar('\n');
}
