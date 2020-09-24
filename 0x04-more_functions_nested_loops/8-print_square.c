#include "holberton.h"
/**
 * print_square - this function print a square nxn.
 * @n: input variable.
 *
 */
void print_square(int n)
{
int a, b;
if (n > 0)
{
for (a = 1; a <= n; a++)
{
for (b = 1; b <= n; b++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
