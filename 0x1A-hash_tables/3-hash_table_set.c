#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_nodeatin - this function adds a node at beginning.
 * @ht: the linked list.
 * @key: the key
 * @value: the value
 * Return: 1 if succes 0 if not.
 */

int add_nodeatin(hash_node_t **ht, const char *key, const char *value)
{
	hash_node_t *newnode;

	newnode = malloc(sizeof(hash_node_t));
	if (newnode == NULL)
	{
		return (0);
	}
	newnode->key = (char *)key;
	newnode->value = (char *)value;
	newnode->next = *ht;
	*ht = newnode;
	return (1);
}

/**
 * hash_table_set - this function set data in the hash table.
 * @ht: the table.
 * @key: the key
 * @value: the value
 * Return: 1 if succes 0 if not.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	const char *cpvalue = value;
	unsigned long int index;

	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = malloc(sizeof(hash_node_t));
		ht->array[index]->key = (char *)key;
		ht->array[index]->value = (char *)cpvalue;
		ht->array[index]->next = NULL;
	}
	else
	{
		if (add_nodeatin(&ht->array[index], key, cpvalue) == 0)
			return (0);
	}
	return (1);
}
