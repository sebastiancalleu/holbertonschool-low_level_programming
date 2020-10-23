#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - this function print numbers.
 * @separator: this is the separator of the numbers.
 * @n: the number count.
 * Return: the printed numbers.
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int a;

	va_start(numbers, n);
	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(numbers, int));
		if (a != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(numbers);
	printf("\n");
}
