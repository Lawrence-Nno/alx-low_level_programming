#include "main.h"

/**
 * _abs - This functions computes the absolute value of a given number
 *
 * Return: Returns 0
 */

int _abs(int num)
{
	int x = (num * -1);
	if (num > 0)
	{
		return (num);
	}
	else if (num == 0)
	{
		return (0);
	}
	else
	{
		return (x);
	}
}
