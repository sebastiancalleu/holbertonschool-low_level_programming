#include "holberton.h"
#include <stdlib.h>
unsigned int _strlen(const char *);
unsigned int power(unsigned int, unsigned int);

/**
 * binary_to_uint - this function converts a binary to decimal
 * @b: the binary number.
 * Return: the decimal number.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int a, c;
	unsigned int sum = 0;

	if (b == NULL)
		return (0);
	a = _strlen(b);
	for (c = 1; c <= a; c++)
	{
		if (b[c - 1] != '0' && b[c - 1] != '1')
			return (0);
		if (b[c - 1] == '1')
		{
			sum = sum + power(2, (a - c));
		}
	}
	return (sum);
}

/**
 * _strlen - this function calculates the lenght of a string.
 * @b: the string.
 * Return: the count.
 */

unsigned int _strlen(const char *b)
{
	int a;

	for (a = 0; b[a]; a++)
	{
	}
	return (a);
}

/**
 * power - this funtion calculates the power of a number.
 * @a: the number.
 * @b: the power.
 * Return: the result.
 */

unsigned int power(unsigned int a, unsigned int b)
{
	int pow = 1;

	for (; b > 0; b--)
	{
		pow = pow * a;
	}
	return (pow);
}
