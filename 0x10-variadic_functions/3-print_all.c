#include "variadic_functions.h"

/**
 * print_all - This variadic function prints anything
 * @format: The format of the data type to print
 * c = char, i = integer, f = float, s = char *
 * prints nill if s is NULL
 * Return: Returns nothing
 */

void print_all(const char * const format, ...)
{
	va_list list;
	int n = 0;
	int i = 0;
	char *sp = ", ";
	char *str;

	va_start(list, format);
	while (format && format[i])
		i++;
	while (format && format[n])
	{
		if (n == (i - 1))
		{
			sp = "";
		}
		switch (format[n])
		{
			case 'c':
				printf("%c%s", va_arg(list, int), sp);
				break;
			case 'i':
				printf("%d%s", va_arg(list, int), sp);
				break;
			case 'f':
				printf("%f%s", va_arg(list, double), sp);
				break;
			case 's':
				str = va_arg(list, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", str, sp);
				break;
		}
		n++;
	}
	printf("\n");
	va_end(list);
}
