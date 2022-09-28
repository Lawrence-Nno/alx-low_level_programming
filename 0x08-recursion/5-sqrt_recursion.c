#include "main.h"

/**
 * _sqrt_recursion - This func returns the natural squareroot of a no
 * @n: The number to find the squareroot of
 * Return: Returns the square root
 */

int sqr(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	else
	{
		return (sqr(a, b + 1));
	}
}

int _sqrt_recursion(int n)
{
	int sqr(n, 1);
}
