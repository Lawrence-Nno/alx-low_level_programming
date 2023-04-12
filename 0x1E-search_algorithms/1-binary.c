#include "search_algos.h"

/**
  * binary_search - Searches binarily for a value in a sorted array
  *                 of integers
  * @array: Pointer to the first element of the array to search.
  * @size: Number of elements in the array.
  * @value: Value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the index where the value is located.
  *
  * Description: Prints the sub_array being searched after each change.
  */
int binary_search(int *array, size_t size, int value)
{
	size_t v, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (v = left; v < right; i++)
			printf("%d, ", array[v]);
		printf("%d\n", array[v]);

		v = left + (right - left) / 2;
		if (array[v] == value)
			return (v);
		if (array[v] > value)
			right = v - 1;
		else
			left = v + 1;
	}

	return (-1);
}
