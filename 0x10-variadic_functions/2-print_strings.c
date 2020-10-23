#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - this function print strings.
 * @separator: this is the separator for the strings.
 * @n: count of strings.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int a;
	char *s;

	va_start(strings, n);
	for (a = 0; a < n; a++)
	{
		s = va_arg(strings, char *);
		if (s != NULL)
		{
			printf("%s", s);
		}
		else
		{
			printf("(nil)");
		}
		if (a != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
