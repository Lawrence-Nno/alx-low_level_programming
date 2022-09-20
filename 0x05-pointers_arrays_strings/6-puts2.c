#include "main.h"

/**
 * puts2 - This function prints everyother charcter
 * @str: the characters to be printed
 * Return: Nth to return for now
 */

void puts2(char *str)
{
	int n;
	int m = 0;

	while (str[m] != '\0')
	{
		m++;
	}
	for (n = 0; n < m; n += 2)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
