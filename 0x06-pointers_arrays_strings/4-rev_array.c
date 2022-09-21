#include "main.h"

/**
 * reverse_array - This function reverses the content of an array of integers
 * @a: The pointer to the integer
 * @n: The number of elements in the array
 * Return: Nothing for now
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = 0;
	int *first;
	int *last;
	int com = 0;

	first = a;
	last = a;
	n--;
	while (i < n)
		i++;
	while (j <= i)
	{
		com = *(first + j);
		*(first + j) = *(last + i);
		*(last + i) = com;
		j++;
		i--;
	}
}
