#include <stdio.h>
#include <stdlib.h>

/**
 * main - This prog prints minimum no of cents for change
 * @argc: The argument count
 * @argv: The array of strings holding the argument
 * Return: Returns 0 if no errors and 1 otherwise
 */

int main(int argc, char *argv[])
{
	int cent;
	int c = 0;

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}
	cent = atoi(argv[1]);
	while (cent > 0)
	{
		c++
		if ((cent - 25) >= 0)
		{
			cent -= 25;
			continue;
		}
		if ((cent - 10) >= 0)
		{
			cent -= 10;
			continue;
		}
		if ((cent - 5) >= 0)
		{
			cent -= 5;
			continue;
		}
		if ((cent - 2) >= 0)
		{
			cent -= 2;
			continue;
		}
		cent--;
	}
	printf("%d\n", c);
	return (0);
}
