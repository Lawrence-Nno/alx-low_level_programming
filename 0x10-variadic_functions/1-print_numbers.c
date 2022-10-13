#include "variadic_functions.h"

/**
 * print_numbers - This function print numbers
 * @separator: This is the string printed between numbers
 * @n: Number of integers passed to the function
 * Return: Returns nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	char *sp;
	unsigned int i;
	va_list list;

	if (separator == NULL || *separator == 0)
		sp = "";
	else
		sp = (char *) separator;
	va_start(list, n);

	if (n > 0)
		printf("%d", va_arg(list, int));
	for (i = 1; i < n; i++)
		printf("%s%d", sp, va_arg(list, int));
	printf("\n");
	va_end(list);
}
