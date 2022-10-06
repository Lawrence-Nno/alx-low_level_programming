#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - This func multiplies two numbers passed as arguments
 * @argc: argument count
 * @argv: arguments passed to the command line terminal
 * Return: Returns 0 if successful and 98 if otherwise
 */

int main(int argc, char *argv[])
{
	int a, b;
	unsigned long mul;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (argv[a][b] >= 58 || argv[a][b] <= 47)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	mul = atol(argv[1]) * atol(argv[2]);
	printf("%lu\n", mul);
	return (0);
}
