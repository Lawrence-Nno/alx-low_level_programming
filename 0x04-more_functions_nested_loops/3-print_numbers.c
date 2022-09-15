#include "main.h"

/**
 * print_numbers - this function prints numbers from 0 to 9
 * Return: no return for now
 */

void print_numbers(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
		_putchar(x);
	_putchar('\n');
}
