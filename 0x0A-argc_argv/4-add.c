#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - This program prints the sum of numbers
 * @argc: The argument count
 * @argv: The array of strings holding the arguments
 * Return: Returns 0 or 1 depending on program success
 */

int main(int argc, char *argv[])
{
	int i;
	int j;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
