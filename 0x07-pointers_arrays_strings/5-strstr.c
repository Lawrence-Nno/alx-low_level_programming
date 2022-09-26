#include "main.h"

/**
 * _strstr - This func finds the first occurence of a substring
 * @haystack: The string to search
 * @needle: The substring to find
 * Return: Nothing
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do
			{
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
}
