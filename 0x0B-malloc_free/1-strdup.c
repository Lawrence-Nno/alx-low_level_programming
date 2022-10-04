#include "main.h"
#include "stdio.h"
#include "stdlib.h"

/**
 * _strdup - This func returns a pointer to a new string
 * @str: The string to be duplicated
 * Return: Returns a pointer to the duplicated string or NULL
 */

char *_strdup(char *str)
{
	char *newstr = NULL;
	unsigned int i;
	int n;

	if (str == NULL)
		return (NULL);
	for (n = 0; str[n] != '\0'; n++);
	newstr = (char *)malloc(n + 1 * sizeof(char));
	if (newstr != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
			new str[i] = str[i];
	}
	else
	{
		return (NULL);
	}
	newstr[i] = '\0';
	return (strnew);
}
