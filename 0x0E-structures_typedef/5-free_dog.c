#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - This function frees dogs
 * @d: The pointer to dog to free
 * Return: Returns nothing
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
