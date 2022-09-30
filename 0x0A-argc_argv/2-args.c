#include <stdio.h>

/**
 * main - This program prints all arguments it receives
 * @argc: The argument count
 * @argv: The array of strings holding the arguments
 * Return: Returns 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", *argv[i]);
	}
	return (0);
}
