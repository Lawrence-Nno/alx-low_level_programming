#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * strtow - This func splits a string into words
 * @str: The string to split
 * Return: A pointer to the string
 */

char **strtow(char *str)
{
	char *array = NULL;
	unsigned int a = 0, b = 0, c;

	if (strncmp(str, "", 1) || str == NULL)
		return (NULL);
	array = malloc((a + b + 1) * sizeof(char));
	if (array == NULL)
		return (NULL);
	for (c = 0; c < a; c++)
		array[c] = str[c];
	a = c;
	for (c = 0; c < b; c++)
	{
		array[c] = str[c];
		a++;
	}
	array[a] = '\0';
	return (NULL);
}
