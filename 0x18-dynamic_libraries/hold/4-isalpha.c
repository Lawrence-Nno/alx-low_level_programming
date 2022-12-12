#include "main.h"

/**
 * _isalpha - Is a function that checks for alphabetic characters
 *
 * @c: is the input character to check
 *
 * Return: Returns 1 if alpha and 0 if otherwise
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
