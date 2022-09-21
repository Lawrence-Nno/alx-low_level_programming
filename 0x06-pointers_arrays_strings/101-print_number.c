#include "main.h"

/**
 * print_number - This func prints an integer
 * @n: The integer to be printed
 * Return: Nth for now
 */

void print_number(int n)
{
	unsigned int i;
	unsigned int j;
	unsigned int k;

	if (n < 0)
	{
		_putchar(45);
		i = n * -1;
	}
	else
	{
		i = n;
	}
	j = i;
	k = 1;

	while (j > 9)
	{
		j /= 10;
		k *= 10;
	}

	for (; k >= 1; k /= 10)
	{
		_putchar(((i / k) % 10) + 48);
	}
}
