#include "main.h"

/**
 * puts2 - This function prints everyother charcter
 * @str: the characters to be printed
 * Return: Nth to return for now
 */

void puts2(char *str)
{
	int n = 0;

	while (*(str + n))
	{
		_putchar(*(str + n));
		n = n + 2;
	}
	_putchar('\n');
}
