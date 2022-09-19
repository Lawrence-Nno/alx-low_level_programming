#include "main.h"

/**
 * print_rev - This function prints strings in reverse
 * @s: The string to print in reverse
 * Return: Nothing for now
 */

void print_rev(char *s)
{
	int s = 0
	int string

	for (s = 0; s[string] != '\0'; s++)
	{
		for (string = s - 1; string >= 0; string--)
		{
			_putchar(s[string]);
		}
		_putchar('\n');
	}
}
