#include "main.h"

/**
 * rot13 - This func encodes a string using rot13
 * @s: The string to encode
 * Return: Returns the encoded string
 */

char *rot13(char *s)
{
	int n = 0;
	int i;
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char r13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + n) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(s + n) == alpha[i])
			{
				*(s + n) = r13[i];
				break;
			}
		}
		n++;
	}
	return (s);
}
