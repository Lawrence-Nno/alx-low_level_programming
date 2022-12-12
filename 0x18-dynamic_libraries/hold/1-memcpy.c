#include "main.h"

/**
 * _memcpy - This func copies n bytes from memory area src to memory area dest
 * @dest: The memory area to be copied to
 * @src: The memory area to copy from
 * @n: Amount of byte to copy
 * Return: Returns a pointer to the memory area dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
