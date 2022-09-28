#include "main.h"

/**
 * is_prime_numnber - THis func identifies a prime number
 * @n: The number to check.
 * Return: returns 1 if number is a prime number
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime(n, 2));
}

/**
 * prime - This functions finds the detects prime numbers
 * @a: One of the numbers
 * @b: The second number to compare with
 * Return: Returns 0 or 1
 */

int prime(int a, int b)
{
	if (a == b)
	{
		return (1);
	}
	else if (a % b == 0)
	{
		return (0);
	}
	else
	{
		return((prime(a, b + 1));
	}
}
