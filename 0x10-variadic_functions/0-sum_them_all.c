#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - this function sum all the arguments.
 * @n: arguments count.
 * Return: the sum of the args.
 *
 *
 */
int sum_them_all(const unsigned int n, ...)
{

	va_list numbers;
	unsigned int a;
	int  sum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(numbers, n);
	for (a = 0; a < n; a++)
	{
		sum += va_arg(numbers, int);
	}
	va_end(numbers);
	return (sum);
}
