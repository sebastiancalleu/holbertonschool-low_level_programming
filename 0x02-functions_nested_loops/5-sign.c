#include "holberton.h"
/**
 * print_sign - check if sign of the number
 *@n: variable input
 * Return: 1 if it is positive, 0 if it is zero and -1 if it is negative
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else
{
if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
}
