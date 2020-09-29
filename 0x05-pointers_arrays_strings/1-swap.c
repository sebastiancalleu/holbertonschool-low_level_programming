#include "holberton.h"
/**
 * swap_int - swap the value of two integers.
 * @&a: input variable address.
 * @&b: input variable address.
 */
void swap_int(int *a, int *b)
{
int c;
c = *b;
*b = *a;
*a = c;
}
