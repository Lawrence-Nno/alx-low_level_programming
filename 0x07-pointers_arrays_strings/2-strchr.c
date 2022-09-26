#include "main.h"

/**
 * _strchr - This function locates a character c in a string s
 * @s: The string to be searched
 * @c: The character to locate
 * Return: Returns a pointer to the first occurence of 'c'
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	if (*s == c)
	{
		return (s);
	}
	return ('\0');
}
