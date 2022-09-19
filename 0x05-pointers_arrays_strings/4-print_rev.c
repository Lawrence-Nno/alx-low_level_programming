#include "main.h"

/**
 * print_rev - This function prints strings in reverse
 * @s: The string to print in reverse
 * Return: Nothing for now
 */

void print_rev(char *s)
{
	int p = 0, i;

	for (p = 0; s[i] != '\0'; p++)
	{
		for (i = s - 1; i >= 0; i--)
		{
			_putchar(s[i]);
		}
		_putchar('\n');
	}
}
