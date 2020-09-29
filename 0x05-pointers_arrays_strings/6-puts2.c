#include "holberton.h"
/**
 * puts2 - print other numbers diferents of a srting
 * @*str: input variable
 *
 */
void puts2(char *str)
{
	int a, b, c;
char cop[100];
b = 0;
for (c = 0; str[c] != 0; c++)
{
}
for (a = 0; str[a] != '\0'; a++)
{
cop[a] = str[b];
_putchar(cop[a]);
if ((b + 2) <= c)
{
b = b + 2;
}
else
{
	break;
}
}
_putchar('\n');
}
