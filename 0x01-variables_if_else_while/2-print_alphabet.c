#include <stdio.h>
/**
 * main - This is the main funtion
 * Return: 0 is returned
 */

int main(void)
{
	for (int x = 'A'; x <='Z'; x++)
	{
		int lower_x = tolower(x);
		putchar(lower_x);
	}
}
