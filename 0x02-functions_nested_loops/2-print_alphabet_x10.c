#include "main.h"

/**
 * print_alphabet_x10 - This function prints alphabet 10 times
 */

void print_alphabet_x10(int y)
{

	int i = 0;
	while (i < 10)
	{
	for (y = 'a'; y <= 'z'; y++)
		_putchar(y);
	}
	_putchar('\n');
}
