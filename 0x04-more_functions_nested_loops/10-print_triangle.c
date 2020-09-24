#include "holberton.h"
/**
 * print_triangle - this puction print triangles.
 * @size: input variable.
 *
 */
void print_triangle(int size)
{
int a, b, c;

if (size > 0)
{
for (a = 1; a <= size; a++)
{
for (b = size; b > a; b--)
{
_putchar (' ');
}
for (c = 1; c <= a; c++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar ('\n');
}
}
