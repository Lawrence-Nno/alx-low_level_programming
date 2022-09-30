#include <stdio.h>

/**
 * main - This program multiplies two numbers
 * @argc: The argument count
 * @argv: The array of strings holding the arguments
 * Return: Returns 0 if successful and 1 if there is error
 */

int main(int argc, char *argv[])
{
	int a, b, mul;

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	mul = a * b;
	if (argc == 3)
	{
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
