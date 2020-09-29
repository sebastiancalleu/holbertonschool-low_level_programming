#include "holberton.h"
/**
 * print_rev - this function prints a string in reverse.
 * @*str: input string.
 *
 */
void print_rev(char *str)
{
int i;
for (i=63; i >= 0; --i)
{
_putchar(str[i]);
}
_putchar('\n');
}
