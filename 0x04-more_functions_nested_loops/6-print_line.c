#include "main.h"

/**
 * print_line - This function prints a straight line on the terminal
 * @n: n is the number of _ you want to print
 * Return: nothing is returned
 */

void print_line(int n)
{
	while (n > '0')
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
