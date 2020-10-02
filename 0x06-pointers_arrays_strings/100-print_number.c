#include "holberton.h"
/**
 * print_number - this function prints an integer.
 * @n: the integer.
 *
 */
void print_number(int n)
{
if (n > 1000)
{
_putchar((n / 1000) + '0');
_putchar(((n / 100) % 10) + '0');
_putchar(((n / 10) % 10) + '0');
_putchar((n % 10) + '0');
}
else
{
if (n > 100)
{
_putchar((n / 100) + '0');
_putchar(((n / 10) % 10) + '0');
_putchar((n % 10) + '0');
}
else
{
if (n > 10)
{
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
}
else
{
if (n == 0)
{
_putchar ('0');
}
else
{
if (n < 0)
{
_putchar('-');
_putchar(((n * -1) / 10) + '0');
_putchar(((n * -1) % 10) + '0');
}
else
{
}
}
}
}
}
}
