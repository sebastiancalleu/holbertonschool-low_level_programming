#include "holberton.h"
#include <stdio.h>

/**
 * flip_bits - this function counts the bit that need to flip.
 * @n: first number.
 * @m: second number.
 * Return: the number of bits to change.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int a = 0;
	unsigned long int b, d;
	int c;

	b = n ^ m;
	for (c = ((sizeof(unsigned long int) * 8) - 1); c >= 0; c--)
	{
		d = b >> c;
		if (d)
		{
			if (d & 1)
				a = a + 1;
		}
	}
	return (a);
}
