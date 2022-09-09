#include <stdio.h>
/**
 * main - This is the main funtion
 * Return: 0 is returned
 */

int main(void)
{
	int x;
	int lower_x;
	for (x = 'A'; x <='Z'; x++)
	{
		lower_x = tolower(x);
		putchar(lower_x);
	}
}
