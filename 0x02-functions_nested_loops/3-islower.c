#include "main.h"

/**
 * _islower - Checks for lower case letters
 * 
 * Return: Returns 1 if lower case and 0 if otherwise
 */

int _islower(int c)
{
	for (c = 'a'; c <= 'z'; c++)
		return (1);
	else
		return (0);
}
