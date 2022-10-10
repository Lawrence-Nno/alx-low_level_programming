#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - This function creates a new dog details
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 * Return: Returns a pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return;

	if (name == NULL)
	{
		free(p);
		free(owner);
		return;
	}
	if (owner == NULL)
	{
		free(p);
		free(name);
		return;
	}
	p->name = name;
	p->age = age;
	p->owner = owner;
	return (p);
}
