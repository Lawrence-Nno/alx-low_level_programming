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
	int i, a, b, n = 0;
	int cent[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	if (i <= 0)
	{
		printf("0");
		return (1);
	}
	else
	{
		for (a = 0; a < 5; a++)
		{
			b = i / cent[i];
			i -= b * cent[i];
			n += b;
			if (i == 0)
				break;
		}
	}
	printf("%d\n", n);
	return (0);
}
