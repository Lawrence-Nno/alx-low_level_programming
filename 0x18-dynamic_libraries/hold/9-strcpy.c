#include "main.h"

/**
 * *_strcpy - a function that copirs the given string
 * @dest: location to copy the string to
 * @src: string to be copied to the location
 * Return: pointing to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
