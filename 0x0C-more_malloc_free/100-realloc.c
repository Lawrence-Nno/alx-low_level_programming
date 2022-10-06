#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - This func reallocates a memory block using malloc and free
 * @ptr: The pointer to the initially allocated memory
 * @old_size: the size of the allocated space for ptr
 * @new_size: the size of the new memory block
 * Return: Returns a pointer to the new memory block
 */

void *realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new;
	unsigned int i;

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	new = malloc(new_size);

	if (new == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
		*((unsigned char *)new + i) = *((unsigned char *)ptr + i);
	return (new);
}
