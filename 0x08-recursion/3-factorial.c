#include "main.h"

/**
 * factorial - This function prints the factorial of a given no
 * @n: The given number
 * Return: Returns the factorial
 */

int factorial(int n)
{
	if (n <= 1)
	{
		return 1;
	}
	else
	{
		return n * factorial(n - 1);
	}
}
