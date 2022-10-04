#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - this func returns a pointer to a 2 dimesional array of ints
 * @width: width of array
 * @height: height of array
 * Return: Returns the pointer
 */

int **alloc_grid(int width, int height)
{
	int a, b, **array;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = malloc(height * sizeof(int *));
	if (array == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		array[a] = malloc(width * sizeof(int));
		if (array[a] == NULL)
		{
			for (b = a - 1; b >= 0; b--)
				free(array[b]);
			free(array);
			return (NULL);
		}
		for (b = 0; b < width; b++)
			array[a][b] = 0;
	}
	return (array);
}
