#include <stdio.h>
/**
 * main - This is the main funtion
 * Return: 0 is returned
 */

int main(void)
{
	int count = 0;
	char n;
	while (count++ <= 9)
	{
		for (n = 'a'; n <= 'z'; n++)
			putchar(n);
		putchar('\n');
	}

}
