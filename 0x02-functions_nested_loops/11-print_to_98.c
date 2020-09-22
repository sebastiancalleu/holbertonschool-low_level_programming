#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - ago to 98.
 * @n: variable input
 * Return: return the count to 98.
 */
void print_to_98(int n)
{
int m;
if (n == 98)
{
printf("98");
}
else
{
if (n < 98)
{
for (m = n; m <= 98; m++)
{
printf("%d", m);
if (m != 98)
printf(", ");
}
}
else
{
for (m = n; m >= 98; m--)
{
printf("%d", m);
if (m != 98)
printf(", ");
}
}
}
printf("\n");
}
