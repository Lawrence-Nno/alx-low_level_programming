#include "main.h"

/**
 * print_rev - This function prints strings in reverse
 * @s: The string to print in reverse
 * Return: Nothing for now
 */

void print_rev(char *s)
{
	int s;

	for (s[s] = '\0'; s != 0; s--)
	{
		_putchar(s[s]);
	}
	_putchar('\n');
}
