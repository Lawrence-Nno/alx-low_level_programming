#include "dog.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_dog - This function prints struct dog
 * @d: pointer to the struct dog details
 * Return: Nth for now
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", (d->name != NULL ? d->name : "(nil)"));
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", (d->owner != NULL ? d->owner : "(nil)"));
}
