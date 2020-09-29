#include "holberton.h"
/**
 * puts_half - this function prints the half string.
 * @str: input variable.
 *
 */
void puts_half(char *str)
{
int a, b, c;
for (a = 0; str[a] != '\0'; a++)
{
}
if (a % 2 == 0)
{
b = a / 2;
}
else
{
b = (a + 1) / 2;
}
for (c = b; c <= (a - 1); c++)
{
_putchar(str[c]);
}
_putchar('\n');
}
