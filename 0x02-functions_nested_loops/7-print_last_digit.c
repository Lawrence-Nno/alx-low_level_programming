#include "main.h"
#include <unistd.h>

/**
 * print_last_digit - This function prints the last digit of a number
 *@num: The number to be checked
 * :Return: Returns 0
 */

int print_last_digit(int num)
{
	int x = (num % 10);

	write(1,x,1);
	return (x);
}
