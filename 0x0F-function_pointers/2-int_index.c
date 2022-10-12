#include "function_pointers.h"

/**
 * int_index - Is a function that searches an integer
 * @array: The array to search
 * @size: number of elements in the array
 * @cmp: Is a pointer to the function used to compare values
 * Return: Returns -1, 0 or the index of the frist element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp && array)
	{
		for (i = 0; i < size; ++i)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
