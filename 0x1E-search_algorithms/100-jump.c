#include "search_algos.h"

/**
  * jump_search - Searches for a value in a sorted array
  *               of integers using jump search.
  * @array: Pointer to the first element of the array to search.
  * @size: Number of elements in the array.
  * @value: Value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the first index where the value is located.
  *
  * Description: Prints a value every time it is compared in the array.
  *              Uses the square root of the array size as the jump step.
  */
int jump_search(int *array, size_t size, int value)
{
	size_t v, jump, step;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	for (v = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		v = jump;
		jump += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", v, jump);

	jump = jump < size - 1 ? jump : size - 1;
	for (; v < jump && array[v] < value; v++)
		printf("Value checked array[%ld] = [%d]\n", v, array[v]);
	printf("Value checked array[%ld] = [%d]\n", v, array[v]);

	return (array[v] == value ? (int)v : -1);
}
