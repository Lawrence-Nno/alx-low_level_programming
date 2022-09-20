#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints a number of items in an array
 * @a: The array to print
 * @n: The number of the items from the array to print
 * Return: nth
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", *(a + i));
		if (i != n - 1)
			printf(", ");
		i++;
	}
	putchar('\n');
}
