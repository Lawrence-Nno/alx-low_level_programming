#include "main.h"

/**
 * _pow_recursion - This func returns the value of x raised to y
 * @x: The number to power multiply
 * @y: The number to raise the power to
 * Return; Returns the answer
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
