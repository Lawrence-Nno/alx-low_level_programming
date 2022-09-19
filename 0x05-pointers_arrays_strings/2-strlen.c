#include "main.h"

/**
 * _strlen - This function checks for the length of a string
 * @s: The string whose length is to be checked
 * Return: void
 */

int _strlen(char *s)
{
	int n;

	for (n = 0; s[n] != '\0'; n++);
	return (n);
}
