#include "holberton.h"

/**
 * set_bit - this function set a bit of a number to 1.
 * @n: the number.
 * @index: the index.
 * Return: the new number.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
		unsigned long int srch = 0x01;

	srch <<= index;
	if (index > (sizeof(unsigned long int) * 8) - 1)
		return (-1);
	*n = *n | srch;
	return (1);
}
