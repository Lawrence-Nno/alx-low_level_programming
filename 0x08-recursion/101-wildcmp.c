#include "main.h"

/**
 * wildcmp - This function compares two strings
 * @s1: One of the strings to compare
 * @s2: Second string to compare with
 * Return: Returns 1 is strings are identical
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, s2 + 1));
		if (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1))
			return (1);
	}
	return (0);
}
