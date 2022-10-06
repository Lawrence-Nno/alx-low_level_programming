#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - The main function
 * @argc: argument count
 * @argv: arguments passed to the command line terminal
 * Return: Returns 0 if successful and 98 if otherwise
 */

int main(int argc, char *argv[])
{
	int i;

	malloc();
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		if (isdigit(argv[i]))
		{
			printf("Error\n");
			exit(98);
		}
	}
	return (0);
}
