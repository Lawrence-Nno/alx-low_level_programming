#include "main.h"

/**
 * sqr - This func returns the natural squareroot of a no
 * @a: The square of the number b
 * @b: The numbers to square
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

/**
 * _sqrt_recursion - This func finds the squaretoot of numbers
 * @n: The number to find the squareroot of
 * Return: Returns the squareroot
 */

int _sqrt_recursion(int n)
{
	return (sqr(n, 1));
}
