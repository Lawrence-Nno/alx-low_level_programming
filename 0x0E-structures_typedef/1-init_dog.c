#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include "dog.h"

/**
 * init_dog - Is a function that initialize a variable of type struct dog
 * @d: the struct dog
 * @name: The name of the dog
 * @age: Age of dog
 * @owner: Owner's details
 * Return: returns nth
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *d;
	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
}
