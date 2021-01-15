#include "hash_tables.h"

/**
 * hash_djb2 - function that transform a string.
 * @str: the string.
 * Return: the function result.
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
