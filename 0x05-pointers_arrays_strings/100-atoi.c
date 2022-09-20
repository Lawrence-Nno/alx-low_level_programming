#include "main.h"

/**
 * _atoi - This function finds and prints first number in a string as an integer
 * @s: The string to convert to an integer and print
 * Return: Nth for now
 */

int _atoi(char *s)
{
	int i = 0;
	int n = 0;
	int m = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == '-')
			m++;
		if (*(s + i) >= '0' && *(s + i) <= '9')
		{
			while (*(s + i) >= '0' && *(s + i) <= '9')
			{
				if (n == 0)
				{
					n = (n * 10) + (*(s + i) - '0');
					n *= -1;
				}
				else
					n = (n * 10) - (*(s + i) - '0');
				i++;
			}
			if (m % 2 == 0)
				n *= -1;
			return (n);
		}
		i++;
	}
	return (0);
}
