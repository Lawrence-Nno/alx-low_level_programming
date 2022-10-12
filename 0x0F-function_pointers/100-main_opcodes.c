#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - This func prints the opcodes of this program
 * @a: Address of the main function
 * @n: Number of bytes to print
 *
 * Return: Returns Nothing
 */

void print_opcodes(char *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", a[i]);
		if (i < n - 1)
		{
			printf(" ");
		}
	}
	printf("\n");
}

/**
 * main - This func prints the opcodes of self functions
 * @argc: Argument count
 * @argv: Array of pointers holding the arguments
 * Return: Returns nothing
 */

int main(int argc, char **argv)
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, n);
	return (0);
}
