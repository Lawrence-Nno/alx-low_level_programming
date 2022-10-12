#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
 * print_name - This function prints a name
 * @name: The name to print
 * @f: A function pointer
 * Return: Returns nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
	 	return;
	}
	f(name);
}
