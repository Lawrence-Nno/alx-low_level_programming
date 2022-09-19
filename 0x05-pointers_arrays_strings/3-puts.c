#include "main.h"

/**
 * _puts - A function that prints a string
 * @str: The string to be printed
 * Return: Nothing for now
 */

void _puts(char *str)
{
	for (*str = 0; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
