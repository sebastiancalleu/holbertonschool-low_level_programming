#include "holberton.h"

/**
 * get_endianness - function to check the endianness.
 * Return: 0 big endian, 1 little endian
 */

int get_endianness(void)
{
	int a = 1;
	char *b = (char *)&a;

	if (*b)
		return (1);
	else
		return (0);
}
