#include "main.h"

/**
 * print_binary - This func prints the binary represensation of a number
 * @n: The number to print the binary rep of
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
