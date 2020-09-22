#include "holberton.h"
/**
 * main - check absolute value
 *
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	int m, p;
m = n % 10;
p = -m;
if (m>=0)
{
_putchar('0' + m);
}
else
{
_putchar('0' + p);
}
return m < 0 ? -m : m;
}

