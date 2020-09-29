#include "holberton.h"
/**
 * print_rev - this function prints a string in reverse.
 * @str: input string.
 *
 */
void print_rev(char *str)
{
int a, b;
for (b = 0; str[b] != '\0'; b++)
{
}
for (a = b; a >= 0; --a)
{
_putchar(str[a]);
}
_putchar('\n');
}
