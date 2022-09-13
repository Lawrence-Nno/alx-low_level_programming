#include "main.h"
#include <unistd.h>

/**
 * main - This the main function
 *
 * Return: This program returns 0
 */
int main(void)
{
	char x;

	x = '_putchar';
	if (x = '_putchar')
		_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	return(0);
}
int _putchar(char c)
{
	return (write(1, &c, 1));
}
