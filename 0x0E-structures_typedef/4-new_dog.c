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
	unsigned int a, b, c;

	if (name == NULL || owner == NULL)
		return (NULL);
	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);
	for (a = 0; name[a]; a++)
		;
	a++;
	p->name = malloc(a * sizeof(char));
	if (p->name == NULL)
	{
		free(p);
		return (NULL);
	}
	for (c = 0; c < a; c++)
		p->name[c] = name[c];
	p->age = age;
	for (b = 0; owner[b]; b++)
		;
	b++;
	p->owner = malloc(b * sizeof(char));
	if (p->owner == NULL)
	{
		free(p->name);
		free(p);
		return (NULL);
	}
	for (c = 0; c < b; c++)
		p->owner[c] = owner[c];
	return (p);
}
/*
	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);

	if (name == NULL)
	{
		free(p);
		free(owner);
		return (NULL);
	}
	if (owner == NULL)
	{
		free(p);
		free(name);
		return (NULL);
	}
	p->name = name;
	p->age = age;
	p->owner = owner;
	return (p);
}*/
