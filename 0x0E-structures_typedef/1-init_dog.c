#include "dog.h"
#include <stddef.h>

/**
 * init_dog - Is a function that initialize a variable of type struct dog
 * @d: the struct dog
 * @name: The name of the dog
 * @age: Age of dog
 * @owner: Owner's details
 * Return: returns nth
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
