#include "function_pointers.h"

/**
 * array_iterator - A function that executes a function given as a parameter
 * @array: The array of elements
 * @size: Size of the array
 * @action: A pointer to the function to use
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(*(array + i));
	}
}
