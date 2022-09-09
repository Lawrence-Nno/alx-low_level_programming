#include <stdio.h>
/**
 * main - This is the main function
 *
 * Return: Always 0
 */
int main(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		if (n != 'e' && n != 'q')
			putchar(n);
	}
	putchar('\n');
	return (0);
}
