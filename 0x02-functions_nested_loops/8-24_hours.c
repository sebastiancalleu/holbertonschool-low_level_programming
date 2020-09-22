#include "holberton.h"
/**
 * main - check all the time in a day O.o?
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
int a, b, c, d;
for (a = '0'; a <= '2'; a++)
{
if (a < '2')
{
for (b = '0'; b <= '9'; b++ )
{
for (c = '0'; c < '6'; c++)
{
for (d = '0'; d <= '9'; d++)
{
_putchar(a);
_putchar(b);
_putchar(':');
_putchar(c);
_putchar(d);
_putchar('\n');
} 
}
}
}
else 
{
for (b = '0'; b < '4'; b++ )
{
for (c = '0'; c < '6'; c++)
{
for (d = '0'; d <= '9'; d++)
{
_putchar(a);
_putchar(b);
_putchar(':');
_putchar(c);
_putchar(d);
_putchar('\n');
}
}
}
}
}
}
