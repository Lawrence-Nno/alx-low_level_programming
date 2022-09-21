#include "main.h"

/**
 * _strncat - This function concatenates two strings without exceeding n bytes
 * @dest: The first string to be concatenates
 * @src: The second string
 * @n: The number of bytes to be used at most
 * Return: Returns dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && *(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i != n)
	{
		dest[i++] = '\0';
	}
	return (dest);
}
