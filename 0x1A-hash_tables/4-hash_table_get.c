#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_get - this function get value from a hash table.
 * @ht: the hash table.
 * @key: the key.
 * Return: the value.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *cpnode;

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		return (NULL);
	}
	cpnode = ht->array[index];
	while (cpnode)
	{
		if (strcmp(cpnode->key, key) == 0)
			return (cpnode->value);
		cpnode = cpnode->next;
	}
	return (NULL);
}
