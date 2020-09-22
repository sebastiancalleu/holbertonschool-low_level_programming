#include "holberton.h"
/**
 * print_times_table - this make a times table.
 * @n: variable input.
 */
void print_times_table(int n)
{
if (n >= 0 && n <= 15)
{
int a, b, c;
for (a = 0; a <= n; a++)
{
for (b = 0; b <= n; b++)
{
c = a * b;
if (b == 0)
{
_putchar(c + '0');
}
else
{
_putchar(',');
_putchar(' ');
if (c / 100 == 0)
{
_putchar(' ');
if (c / 10 == 0)
{
_putchar(' ');
_putchar(c + '0');
}
else
{
_putchar((c / 10) + '0');
_putchar((c % 10) + '0');
}
}
else
{
_putchar((c / 100) + '0');
_putchar(((c / 10)) % 10 + '0');
_putchar((c % 10) + '0');
}
}
}
_putchar('\n');
}
}
else
{
}
}
