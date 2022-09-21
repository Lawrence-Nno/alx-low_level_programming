#include "main.h"

/**
 * string_toupper - This func changes all lowercase to uppercase
 * Return: Returns the uppercase characters
 */

char *string_toupper(char *ch)
{
	int n = 0;

	while(*(ch + n) != '\0')
	{
		if (*(ch + n) >= 97 && *(ch + n) <= 122)
			*(ch + n) = *(ch + n) - ' ';
		n++;
	}
	return (ch);
}
