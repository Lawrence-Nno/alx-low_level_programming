#include "main.h"

/**
 * puts_half - This function prints half a sstring
 * @str: The string to be printed in halg
 * Return: nth for now
 */

void puts_half(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (*(str + i) != 0)
	{
		i++;
	}
	if (i % 2 == 0)
		i/= 2;
	else
	{
		j = (i - 1) / 2;
		i -= j;
	}
	while (*(str + i) != 0)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
