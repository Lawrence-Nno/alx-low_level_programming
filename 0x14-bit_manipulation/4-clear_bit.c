#include "main.h"

/**
 * clear_bit - This func sets the value of a bit to 0 at a given index
 * @n: The bit
 * @index: The index starting from 0
 * Return: Returns 1 if successful or -1 if error occurs
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
