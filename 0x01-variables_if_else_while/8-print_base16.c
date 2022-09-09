#include <stdio.h>

/**
 * main - This program prints all hexadecimals in lowercase
 *
 * Return: Returns 0
 */
int main(void)
{
	char x;
	char y;

	for (x = '0'; x <= '9'; x++)
		putchar(x);
	for (y = 'a'; y <= 'f'; y++)
		putchar(y);
	putchar('\n');
	return (0);
}
