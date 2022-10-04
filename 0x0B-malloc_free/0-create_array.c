#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create array - this func creates an array of chars
 * @size: Size of the array
 * @c: the chars
 * Return: returns a pointer to the array or null
 */

char *create_array(unsigned int size, char c)
{
	char *array = NULL;
	unsigned int i;

	if (size == 0)
		return (NULL);
	if (size != 0)
	{
		array = char *malloc(size * sizeof(char));
		if (array != NULL)
		{
			for (i = 0; i < size; i++)
				array[i] = c;
		}
	}
	return (array);
}
