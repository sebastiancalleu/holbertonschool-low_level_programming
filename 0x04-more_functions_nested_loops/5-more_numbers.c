#include "holberton.h"
/**
 * more_numbers - this function print more numbers.
 *
 *
 */
void more_numbers(void)
{
int a;
int b;
for (b = 1; b <= 10; b++)
{
for (a = 10; a <= 24 ; a++)
{
if (a > 19)
{
_putchar((a / 20) + '0');
}
else
{
}
_putchar((a % 10) + '0');
}
_putchar('\n');
}
}
