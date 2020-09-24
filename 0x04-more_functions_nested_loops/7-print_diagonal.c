#include "holberton.h"
/**
 * print_diagonal - this function print a diagonal.
 * @n: input variable.
 *
 */
void print_diagonal(int n)
{
	int a, b;
if (n > 0)
{
for (b = 1; b <= n; b++)
{
for (a = 1; a <= b; a++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
