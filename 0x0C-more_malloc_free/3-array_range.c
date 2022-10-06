#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - This function creates an array of integers
 * @min: Minimum value
 * #max: Maximum value
 * Return: Returns a pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *s;
	int a, b;

	b = (max - min) + 1;
	if (min > max)
	{
		return (NULL);
	}
	s = malloc(sizeof(int) * b);
	if (s == NULL)
	{
		return (NULL);
	}
	for (a = 0; min <= max; a++)
	{
		s[a] = min++;
	}
	return (s);
}
