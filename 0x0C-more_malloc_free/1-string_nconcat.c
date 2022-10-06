#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - This func concatenates two strings
 * @s1: First string
 * @s2: Second String
 * @n: lenght of string
 * Return: Returns a pointer to the address of the string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b, c;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	a = 0;
	while (s1[a])
		a++;

	s = malloc(sizeof(*s) * a + n + 1);
	if (s == NULL)
		return (NULL);
	for (b = 0, c = 0; b < (a + n); b++)
	{
		if (b < a)
		{
			s[b] = s1[b];
		}
		else
		{
			s[b] = s2[c++];
		}
	}
	s[b] = '\0';
	return (s);
}
