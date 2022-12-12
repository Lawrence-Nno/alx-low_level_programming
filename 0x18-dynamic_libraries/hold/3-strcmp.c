#include "main.h"

/**
 * _strcmp - This function compares two strings
 * @s1: The pointer to the first string
 * @s2: The pointer to the second string
 * Return: Returns zero
 */

int _strcmp(char *s1, char *s2)
{
	int n = 0;
	int com;

	while (*(s1 + n) != '\0')
	{
		if (*(s1 + n) > *(s2 + n))
		{
			com = *(s1 + n) - *(s2 + n);
			return (com);
		}
		else if (*(s1 + n) < *(s2 + n))
		{
			com = *(s1 + n) - *(s2 + n);
			return (com);
		}
		n++;
	}
	return (0);
}
