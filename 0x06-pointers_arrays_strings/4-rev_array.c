#include "holberton.h"
/**
 * reverse_array - this function reverse an array.
 * @a: input array.
 * @n: input integer.
 *
 */
void reverse_array(int *a, int n)
{
int c, d, b[1000];
d = 0;
for (c = 0; c < n; c++)
{
b[c] = a[c];
}
for (c = c - 1; c >= 0; c--)
{
a[c] = b[d];
d++;
}
}
