#include "main.h"

/**
 * cap_string - This func capitalizes all words of a string
 * @s: The string whose words will be capitalized
 * Return: Returns a character
 */

char *cap_string(char *s)
{
	int n = 0;

	while (*(s + n) != '\0')
	{
		if (n == 0 && (*(s + n) >= 97 && *(s + n) <= 122))
		{
			*(s + n) = *(s + n) - ' ';
			n++;
		}
		if (*(s + n) == ' ' || *(s + n) == '\n' || *(s + n) == '\t'
			|| *(s + n) == ',' || *(s + n) == ';' || *(s + n) == '!'
			|| *(s + n) == '?' || *(s + n) == '"' || *(s + n) == '('
			|| *(s + n) == ')' || *(s + n) == '{' || *(s + n) == '}'
			|| *(s + n) == '.')
		{
			n++;
			if (*(s + n) >= 97 && *(s + n) <= 122)
			{
				*(s + n) = *(s + n) - ' ';
			}
		}
		else
			n++;
	}
	return (s);
}
