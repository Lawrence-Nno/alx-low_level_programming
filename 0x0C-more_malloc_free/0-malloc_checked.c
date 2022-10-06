#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - This func allocates memory using malloc
 * @b: The size of the memory
 * #Return: Returns a pointer
 */

void *malloc_checked(unsigned int b)
{
	void *a = malloc(b);

	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}
