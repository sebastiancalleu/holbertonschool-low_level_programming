#include "holberton.h"
/**
 * print_line - this function print a line.
 * @n: is the input variable
 *
 */
void print_line(int n)
{
int a;
if (n > 0)
{
for (a = 1; a <= n; a++)
{
_putchar('_');
}
}
else
{
}
_putchar('\n');
}

