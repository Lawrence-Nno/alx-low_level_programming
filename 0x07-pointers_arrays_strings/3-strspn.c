#include "main.h"

/**
 * _strspn - This function gets the length of a prefix substring
 * @s: The string
 * @accept: The prefix to get
 * @Return: Number of desired bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int b = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				b++;
				break;
			}
			else if (accept[i + 1] == '\0')
			{
				return (b);
			}
		}
		s++;
	}
	return (b);
}
