#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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
 * _atoi - converts a string to the values they rep in ascii
 * @s: a pointer pointing to the string
 * Return: Returns the value of digits
 */

int _atoi(char *s)
{
	int i, r;

	i = r = 0;
	while (s[i])
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			r *= 10;
			r += (s[i] - '0');
		}
		i++;
	}
	return (r);
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
