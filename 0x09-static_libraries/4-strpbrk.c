#include "main.h"

/**
 * _strpbrk - searches for a string for any of a set of bytes
 * @s: The string to search
 * @accept: The set of bytes to search
 * Return: returns a pointer to a byte in s
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
