#include "main.h"

/**
 * _strcat - This function concatenates two strings
 * @dest: the first string
 * @src: The second string
 * Return: Returns dest
 */

char *_strcat(char *dest, char *src)
{
	unsigned int i = 0;
	unsigned int j = 0;

	while (*(dest + i) != '\0')
		i++;
	while (*(src + j) != '\0')
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	return (dest);
}
