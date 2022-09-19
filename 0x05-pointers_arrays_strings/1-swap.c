#include "main.h"

/**
 * swap_int - This function swaps the value of two integers
 * @a: One of the integers to be swapped
 * @b: The other integer to be swapped
 * @c: Where the initial value of *a will be stored before swapping
 * Return: Nth for now
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
