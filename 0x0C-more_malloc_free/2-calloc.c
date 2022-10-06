#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - This func allocates memory for an array using malloc
 * @nmemb: Number of input elements
 * @size: Size of inputted elements
 * Return: Returns a pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int a, b;

	b = nmemb * size;
	if (nmemb <= 0 || size <= 0)
		return (NULL);
	s = malloc(b);
	if (s == NULL)
		return (NULL);
	for (a = 0; a < b; a++)
	{
		s[a] = 0;
	}
	return (s);
}
