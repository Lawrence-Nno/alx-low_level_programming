#include "main.h"
#include <stdio.h>
#include <stdlib.h>
int _isdigit(char *argv);

/**
 * _isdigit - Checks if strings are digits
 * @argv: Contains the current argument
 * Return: Returns 0 if all strings are digits and 1 otherwise
 */

int _isdigit(char *argv)
{
	int i;

	i = 0;
	while (argv[i])
	{
		if (argv[i] >= '0' && argv[i] <= '9')
			i++;
		else
			return (1);
	}
	return (0);
}

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
		if (_isdigit(argv[i]))
		{
			printf("Error\n");
			exit(98);
		}
	}
	return (0);
}
