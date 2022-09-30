#include <stdio.h>

/**
 * main - This program prints the number of arguments passed to it
 * @argc: The argument count
 * @argv: The array of strings holding the arguments
 * Return: Returns 0 on completion
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
