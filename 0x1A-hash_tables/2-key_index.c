#include "hash_tables.h"

/**
 * key_index - this function generates an index for a key
 * @key: the key.
 * @size: size of the hash table.
 * Return: the index.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index, hash;

	hash = hash_djb2(key);
	index = hash % size;
	return (index);
}
