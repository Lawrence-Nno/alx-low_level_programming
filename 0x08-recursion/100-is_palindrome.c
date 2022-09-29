#include "main.h"

/**
 * is_palindrome - This func identifies a palindrome
 * @s: The string to identify
 * Return: Returns 1 is positive
 */

int is_palindrome(char *s)
{
	int n;

	n = pali(s);
	if (n == 0 || n == 1)
		return (1);
	return (palin(s, 1));
}

/**
 * pali - This func obtains length of string a
 * @a: the string to count
 * Return: Returns 1
 */

int pali(char *a)
{
	int n;

	n = 0;
	if (*a != 0)
	{
		n++;
		return (n + pali(a + 1));
	}
	return (n);
}

/**
 * palin - This func compares string and string reverse
 * @n: The length of string a
 * @a: The string to compare
 * Return: Returns 0 or 1
 */

int palin(char *a, int n)
{
	if (n <= 1)
		return (1);
	if (*a != a[n - 1])
	{
		return (0);
	}
	else
	return (palin(a + 1, n - 2));
}
