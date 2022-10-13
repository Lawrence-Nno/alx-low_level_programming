#include "variadic_functions.h"

/**
 * print_strings - This variadic function print strings
 * @separator: The string to be printed in between the strings
 * @n: Number of strings passed to the function
 * Return: Returns nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *sp, *pt;
	unsigned int i;
	va_list list;

	if (separator == NULL || *separator == 0)
	{
		sp = "";
	}
	else
	{
		sp = (char *) separator;
	}
	va_start(list, n);

	if (n > 0)
		printf("%s", va_arg(list, char *));
	for (i = 1; 1 < n; i++)
	{
		pt = va_arg(list, char*);
		if (pt == NULL)
			pt = "(nil)";
		printf("%s%s", sp, pt);
	}
	printf("\n");
	va_end(list);
}
