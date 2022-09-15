#include "main.h"

/**
 * _isdigit - is a function that checks for digits
 * @c: is the input to check
 * Return: 1 is returned if the input is a digit and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
