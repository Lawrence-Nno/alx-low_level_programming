#include "main.h"

/**
 * _strspn - This func gets the length of a prefix substring
 * @s: The string
 * @accept: The prefix to get
 * return: Number of desired bytes
 * return: nth
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
