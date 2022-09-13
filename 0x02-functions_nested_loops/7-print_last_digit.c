#include "main.h"

/**
 * print_last_digit - This function prints the last digit of a number
 *@num: The number to be checked
 * :Return: Returns 0
 */

int print_last_digit(int num)
{
	int x = (num % 10);

	if (x < 0)
	{
		x = (-1 * x);
	}
	_putchar(x + '0');
	return (x);
}
