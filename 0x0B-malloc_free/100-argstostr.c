#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - This func concatenates the arguments of my program
 * @ac: The the argument count
 * @av: the arguments to be concatenated
 * Return: The concatenated arguments
 */

char *argstostr(int ac, char **av)
{
	int a, b, c = 0;
	char *ccat = NULL;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
		for (b = 0; av[a][b] != '\0'; b++)
			c++;
	ccat = malloc(sizeof(char) * (c + ac + 1));
	if (ccat == NULL)
		return (NULL);
	for (a = 0, c = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++, c++)
			ccat[c] = av[a][b];
		ccat[c] = '\n';
		c++;
	}
	ccat[c] = '\0';
	return (ccat);
}
