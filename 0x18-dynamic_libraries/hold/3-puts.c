#include "main.h"

/**
 * _puts - A function that prints a string
 * @str: The string to be printed
 * Return: Nothing for now
 */

void _puts(char *str)
{
	int s;

	for (s = 0; str[s] != '\0'; s++)
	{
		_putchar(str[s]);
	}
	_putchar('\n');
}
