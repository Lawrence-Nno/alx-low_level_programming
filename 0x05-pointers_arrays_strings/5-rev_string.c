#include "main.h"

/**
 * rev_string - This function reverses strings
 * @s: The string to be reversed
 * Return: Nth for now
 */

void rev_string(char *s)
{
	int i = 0, n = 0;
	char t[];

	while (*(s + i))
	{
		*(t + i) = *(s + i);
		i++;
	}

	i = i - 1;
	while(i >= 0)
	{
		*(s + i) = *(t + n);
		n++;
		i--;
	}
	
}
