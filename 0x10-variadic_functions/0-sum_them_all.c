#include "variadic_functions.h"

/**
 * sum_them_all - This variadic function returns the sum of all its parameters
 * @n: Number of the arguments entered.
 * Return: Returns the sum of the arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(valist, const unsigned int);
	}
	va_end(valist);
	return (sum);
}
