#include "holberton.h"
#include <stdio.h>

/**
 * print_binary - this function prints the binary number of a decimal.
 * @n: the decimal number.
 */

void print_binary(unsigned long int n)
{
	unsigned long int a;
	int b;

	if (n == 0)
	{
		_putchar('0');
	}
	for (b = ((sizeof(unsigned long int) * 8) - 1); b >= 0; b--)
	{
		a = n >> b;
		if (a)
		{
			if (a & 1)
				_putchar('1');
			else
				_putchar('0');
		}
	}
}
