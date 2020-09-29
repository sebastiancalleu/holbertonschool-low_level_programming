#include "holberton.h"
/**
 * _puts - this function prints a string
 * @str: input string.
 *
 */
void _puts(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
