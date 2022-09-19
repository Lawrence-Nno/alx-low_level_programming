#include "main.h"

/**
 * print_rev - This function prints strings in reverse
 * @s: The string to print in reverse
 * Return: Nothing for now
 */

void print_rev(char *s)
{
	int p;
	int i;

	for (p = 0; s[i]++; p++)
	{
		for (s = p - 1; s[i] >= 0; s--)
		{
			_putchar(s[i]);
		}
		_putchar('\n');
	}
}
