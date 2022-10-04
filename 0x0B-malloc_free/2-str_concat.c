#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - points to a newly allocated space in mem
 * @s1: first string
 * @s2: second string
 * Return: Returns a pointer to the newly allocated space or null
 */

char *str_concat(char *s1, char *s2)
{
	char *newstr = NULL;
	unsigned int i;
	int n1;
	int n2;
	int n3;

	n3 = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (n1 = 0; s1[n1] != '\0'; n1++)
		;
	for (n2 = 0; s2[n2] != '\0'; n2++)
		;
	newstr = (char *)malloc((n1 + n2 + 1) * sizeof(char));
	if (newstr == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
		newstr[i] = s1[i];
	for (; s2[n3] != '\0'; i++)
	{
		newstr[i] = s2[n3];
		n3++;
	}
	return (newstr);
}
