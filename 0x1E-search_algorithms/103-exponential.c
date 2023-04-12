#include "search_algos.h"

/**
  * _binary_search - Searches in a sorted array of integers for
  *                  a value using binary search.
  * @array: A pointer to the first element of the array to search.
  * @left: The starting index of the sub_array to search.
  * @right: The ending index of the sub_array to search.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the index where the value is located.
  *
  * Description: Prints the [sub]array being searched after each change.
  */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t v;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (v = left; v < right; v++)
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

/**
  * exponential_search - Searches for a value in a sorted array
  *                      of integers using exponential search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the index where the value is located.
  *
  * Description: Prints a value every time it is compared in the array.
  */
int exponential_search(int *array, size_t size, int value)
{
	size_t v = 0, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (v = 1; v < size && array[v] <= value; v = v * 2)
			printf("Value checked array[%ld] = [%d]\n", v, array[v]);
	}

	right = v < size ? v : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", v / 2, right);
	return (_binary_search(array, v / 2, right, value));
}
