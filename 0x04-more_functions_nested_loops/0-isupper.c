#include "main.h"

/**
 * int _isupper(int c) - This function checks for upper case letters.
 *
 * @c: is the input to be checked
 *
 * Return: Returns 1 if uppercase
 * Return: Returns 0 f lowercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
