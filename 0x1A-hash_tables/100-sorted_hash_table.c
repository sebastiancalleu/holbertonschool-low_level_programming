#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * shash_table_create - function that creates a hash table
 * @size: the size of the hash table.
 * Return: the hash table.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int a;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
	{
		return (NULL);
	}
	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < size; a++)
	{
		ht->array[a] = NULL;
	}
	return (ht);
}

/**
 * sadd_nodeatin - this function adds a node at beginning.
 * @ht: the linked list.
 * @key: the key
 * @value: the value
 * Return: 1 if succes 0 if not.
 */

int sadd_nodeatin(shash_node_t **ht, const char *key, const char *value)
{
	shash_node_t *newnode;

	newnode = malloc(sizeof(shash_node_t));
	if (newnode == NULL)
	{
		return (0);
	}
	newnode->key = strdup(key);
	newnode->value = strdup(value);
	newnode->next = *ht;
	*ht = newnode;
	return (1);
}

/**
 * shash_table_set - this function set data in the hash table.
 * @ht: the table.
 * @key: the key
 * @value: the value
 * Return: 1 if succes 0 if not.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	int flag = 0;
	shash_node_t *cpynode;

	if (key == NULL || strcmp(key, "") == 0 || ht == NULL || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = malloc(sizeof(shash_node_t));
		if (ht->array[index] == NULL)
			return (0);
		ht->array[index]->key = strdup(key);
		ht->array[index]->value = strdup(value);
		ht->array[index]->next = NULL;
	}
	else
	{
		cpynode = ht->array[index];
		while (cpynode)
		{
			if (strcmp(cpynode->key, key) == 0)
			{
				if (cpynode->value)
				{
					free(cpynode->value);
					cpynode->value = strdup(value);
				}
				flag = 1;
				break;
			}
			cpynode = cpynode->next;
		}
		if (flag != 1)
			if (sadd_nodeatin(&ht->array[index], key, value) == 0)
				return (0);
	}
	return (1);
}

/**
 * shash_table_get - this function get value from a hash table.
 * @ht: the hash table.
 * @key: the key.
 * Return: the value.
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *cpnode;

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

/**
 * shash_table_print - this function prints a hash table.
 * @ht: the hash table.
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *cpynode;
	unsigned int a, b = 0;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	for (a = 0; a < ht->size; a++)
	{
		cpynode = ht->array[a];
		while (cpynode)
		{
			if (b > 0)
				printf(", ");
			printf("'%s': '%s'", cpynode->key, cpynode->value);
			cpynode = cpynode->next;
			b++;
		}
	}
	printf("}\n");
}

/**
 * sfree_list - this function free the list
 * @head: the head of the list.
 */
void sfree_list(shash_node_t *head)
{
	int a;
	shash_node_t *temp;

	for (a = 0; head; a++)
	{
		temp = head->next;
		free(head->key);
		free(head->value);
		free(head);
		head = temp;
	}
}

/**
 * shash_table_delete - free a hash table.
 * @ht: the hash table.
 */

void shash_table_delete(shash_table_t *ht)
{
	unsigned int a;

	for (a = 0; a < ht->size; a++)
	{
		while (ht->array[a])
		{
			sfree_list(ht->array[a]);
			a++;
		}
	}
	free(ht->array);
	free(ht);
}

/**
 * shash_table_print_rev - print table in reverse.
 * @ht: the hash table.
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	printf("%lu\n", ht->size);
	printf("Nothing to do here ...\n");
}
