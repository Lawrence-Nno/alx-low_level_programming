#include "main.h"
#include <unistd.h>

/**
 * main - This the main function
 *
 * Return: This program returns 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
