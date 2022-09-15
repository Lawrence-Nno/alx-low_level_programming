#include "main.h"
/**
 * print_triangle - This function prints a pyramid.
 * @size: Size of the pyramid
 * Return: Nothing to return for now
 */

void print_triangle(int size)
{
	int i;
	int j;
	int lmt = size;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			lmt--;
			for (j = 0; j < size; j++)
			{
				if (j < lmt)
				{
					_putchar(32);
				}
				else
				{
					_putchar(35);
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
