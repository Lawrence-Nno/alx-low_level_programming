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
	int byte, in;
	
	for (byte = 0; byte < size; byte += 10)
	{
		printf("%08x: ", byte);

		for (in = 0; in < 10; in++)
		{
			if ((in + byte) >= size)
				printf(" ");
	
			else
				printf("%02x", *(b + in + byte));
			if ((in % 2) != 0 && in != 0)
				printf(" ");
		}
		for (in = 0; in < 10; in++)
		{
			if ((in + byte) >= size)
				break;

			else if (*(b + in + byte) >= 31 && *(b + in + byte) <= 126) 
				printf("%c", *(b + in + byte));
			else
				printf(".");
		}
		if (byte >= size)
			continue;

		printf("\n");
	}
	if (size <= 0)
		printf("\n");
}
