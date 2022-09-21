#include "main.h"

/**
 * leet - This function encodes a string into 1337
 * @s: The pointer to the string
 * Return: Retuns the character
 */

char *leet(char *s)
{
	int n = 0;
	int i;
	int lowercase[] = {97, 101, 111, 116, 108};
	int uppercase[] = {65, 69, 79, 84, 76};
	int numerals[] = {52, 51, 48, 55, 49};

	while (*(s + n) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + n) == lowercase[i] || *(s + n) == uppercase[i])
			{
				*(s + n) = numerals[i];
				break;
			}
		}
		n++;
	}
	return (s);
}
