#include "main.h"

/**
 * _islower - Checks for lower case letters
 * @c: - Is the input character to check
 *
 * Return: Returns 1 if lower case and 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
