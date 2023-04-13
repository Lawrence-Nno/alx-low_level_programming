#include "search_algos.h"

/**
  * advanced_binary_recursive - Searches for a value in a sorted array of
  *                             integers recursively using binary search.
  * @array: Pointer to the first element of the sub_array to search.
  * @left: The starting index of the sub_array to search.
  * @right: Ending index of the sub_array to search.
  * @value: Value to search for.
  *
  * Return: If the value is not present, -1.
  *         Otherwise, the index where the value is located.
  *
  * Description: Prints the sub_array being searched after each change.
  */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t v;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (v = left; v < right; v++)
		printf("%d, ", array[v]);
	printf("%d\n", array[v]);

	v = left + (right - left) / 2;
	if (array[v] == value && (v == left || array[v - 1] != value))
		return (v);
	if (array[v] >= value)
		return (advanced_binary_recursive(array, left, v, value));
	return (advanced_binary_recursive(array, v + 1, right, value));
}

/**
  * advanced_binary - Searches for a value in a sorted array
  *                   of integers using advanced binary search.
  * @array: Pointer to the first element of the array to search.
  * @size: Number of elements in the array.
  * @value: Value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the first index where the value is located.
  *
  * Description: Prints the [sub]array being searched after each change.
  */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
