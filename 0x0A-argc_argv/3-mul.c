#include <stdio.h>
#include <stdlib.h>

/**
 * main - This program multiplies two numbers
 * @argc: The argument count
 * @argv: The array of strings holding the arguments
 * Return: Returns 0 if successful and 1 if there is error
 */

int main(int argc, char *argv[])
{
	int a, b, mul;

	if (argc != 3)
	{
		puts("Error");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	mul = a * b;
	printf("%d\n");
	return (0);
}
