#include "main.h"

/**
 * _memset - This functions fills the memory with a constant character
 * @s: The pointer pointing the area in memory to be filled
 * @b: The character constant to fill with
 * @n: The number of bytes to fill
 * Return: Returns the pointer to he filled memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
