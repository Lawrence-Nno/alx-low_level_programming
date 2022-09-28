#include "main.h"

/**
 * _print_rev_recursion - prints strings in reverse
 * @s: the string to print in reverse
 * Return: The string printed
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
