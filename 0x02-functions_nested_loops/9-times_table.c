#include "holberton.h"
/**
 * times_table - this make a times table.
 * 
 * 
 */
void times_table(void)
{
int a, b, c;
for (a = 0; a <= 9; a++)
{
for (b = 0; b <= 9; b++)
{
c = a*b;
if (b == 0)
{
_putchar(c + '0');
_putchar(',');
_putchar(' ');
}
else
{
if (c < 10)
{
_putchar(' ');
_putchar((c % 10) + '0');
}
else 
{
_putchar((c / 10) + '0');
_putchar((c % 10) + '0');
}
if (b != 9)
{
_putchar(',');
_putchar(' ');
}
}
}
_putchar('\n');
}
}
