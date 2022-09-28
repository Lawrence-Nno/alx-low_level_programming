#include "main.h"

/**
 * _strlen_recursion - This func returns the length of a string
 * @s: The string
 * Return: Returns the length
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
