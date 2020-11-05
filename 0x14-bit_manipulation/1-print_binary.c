#include "holberton.h"

/**
 * print_binary - this function prints the binary number of a decimal.
 * @n: the decimal number.
 */

void print_binary(unsigned int n)
{
	int a, b;

	if (n == 0)
	{
		_putchar('0');
	}
	for (b = 31; b >= 0; b--)
	{
		a = n >> b;

		if (a & 1)
		{
			for (; b >= 0; b--)
			{
				a = n >> b;
				if (a & 1)
					_putchar('1');
				else
					_putchar('0');
			}
		}
	}
}
