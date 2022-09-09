#include <stdio.h>

/**
 * main - Thisprogram prints all possible combination of single digits
 *
 * Return: Always 0
 */
int main(void)
{
	int com;

	for (com = '0'; com <= '9'; com++)
	{
		putchar((num % 10) + '0');
		if (num == 9)
			continue;
		putchar (',');
		putchar (' ');
	}
	putchar('\n');
	return (0);
}
