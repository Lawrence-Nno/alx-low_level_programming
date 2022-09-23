#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints a buffer
 * @b: the buffer to be printed
 * @size: the number of bytes to be printed
 * Return: Nothing for now
 */

void print_buffer(char *b, int size)
{
	int n = 0;
	int i;
	int j;
	int c;

	if (size <= 0)
	{
		printf("\n");
		break;
	}
	while (n < size)
	{
		j = size - n < 10 ? size - n : 10;
		printf("%08x: ", n);
		for (i = 0: i < 10; i++)
		{
			if (i < j)
			{
				printf("%02x", *(b + n + i));
			}
			else
			{
				printf(" ");
			}
			if (i % 2)
			{
				printf(" ");
			}
		}
		for (i = 0; i < j; i++)
		{
			c = *(b + n + i);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		n += 10;
	}
	return(0);
}
