#include <stdio.h>

/**
 * main - This is the main function
 *
 * Return: 0 is returned for this proggram
 */

int main(void)
{
	char x;
	char Y;

	for (x = 'a'; x <= 'z'; x++)
		putchar(x);

	for (Y = 'A'; Y <= 'Z'; Y++)
		putchar(Y);

	putchar('\n');
	return (0);
}
