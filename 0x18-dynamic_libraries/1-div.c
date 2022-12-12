#include "main.h"

/**
 * div - This func divides two integers
 * @a: The first integer
 * @b: The second integer
 * Return: Returns an int
 */

int div(int a, int b)
{
	int c = a / b;

	if (b <= 0)
		return (0);
	else
		return (c);
}
