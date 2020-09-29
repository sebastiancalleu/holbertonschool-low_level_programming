#include "holberton.h"
#include <stdio.h>
/**
 * print_array - this function print an array
 * @a: input array
 * @n: input variable
 */
void print_array(int *a, int n)
{
int b;
for (b = 0; b < n; ++b)
{
printf("%d", a[b]);
if (b != (n - 1))
{
printf(", ");
}
else
{
}
}
printf("\n");
}
