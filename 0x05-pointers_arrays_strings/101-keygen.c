#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - This function creates random password
 *
 * Return: returns 0
 */

int main(void)
{
	int u, pwd;

	srand(time(NULL));
	u = 2772;
	while (u >= 127)
	{
		pwd = (rand() % 126) + 1;
		printf("%c", pwd);
		u -= pwd;
	}
	printf("%c", u);
	return (0);
}
