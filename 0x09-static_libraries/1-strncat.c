#include "main.h"

/**
 * _strncat - This function concatenate two strings
 * @dest: The pointer to first string
 * @src: The pointer to the second string
 * @n: The number of bytes at most
 * Return: Returns dest
 */

char *_strncat(char *dest, char *src, int n)
{
	unsigned int i = 0;
	int j = 0;

	while (*(dest + i) != '\0')
		i++;
	while (*(src + j) != '\0')
	{
		if (j < n)
		{
			*(dest + i) = *(src + j);
			i++;
		}
		j++;
	}
	return (dest);
}
