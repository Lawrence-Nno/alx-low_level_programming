#include "main.h"

/**
 *_isupper - This function checks for upper case letters.
 *
 * @c: is the input to be checked
 *
 * Return: Returns 1 if uppercase
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
