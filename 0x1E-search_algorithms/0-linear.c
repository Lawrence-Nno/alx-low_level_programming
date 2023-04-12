#include "search_algos.h"

/**
  * linear_search - Searches linearly for a value in an array
  *                 of integers.
  * @array: A pointer to the first element of the array to search.
  * @size: Number of elements in the array.
  * @value: Value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the first index where the value is located.
  *
  * Description: Prints a value every time it is compared in the array.
  */
int linear_search(int *array, size_t size, int value)
{
	size_t v;

	if (array == NULL)
		return (-1);

	for (v = 0; v < size; v++)
	{
		printf("Value checked array[%ld] = [%d]\n", v, array[v]);
		if (array[v] == value)
			return (v);
	}

	return (-1);
}
