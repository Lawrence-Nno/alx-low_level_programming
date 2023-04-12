#include "search_algos.h"

/**
  * interpolation_search - Searches in a sorted array of integers 
                           for a value using interpolation search.
  * @array: A pointer to the first element of the array to search.
  * @size: Number of elements in the array.
  * @value: Value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the first index where the value is located.
  *
  * Description: Prints a value every time it is compared in the array..
  */
int interpolation_search(int *array, size_t size, int value)
{
	size_t v, le, ri;

	if (array == NULL)
		return (-1);

	for (le = 0, ri = size - 1; ri >= le;)
	{
		v = le + (((double)(ri - le) / (array[ri] - array[le])) * (value - array[le]));
		if (v < size)
			printf("Value checked array[%ld] = [%d]\n", v, array[v]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", v);
			break;
		}

		if (array[v] == value)
			return (v);
		if (array[v] > value)
			ri = v - 1;
		else
			le = v + 1;
	}

	return (-1);
}
