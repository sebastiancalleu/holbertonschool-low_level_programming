#include "hash_tables.h"
#include <stdlib.h>

/**
 * free_list - this function free the list
 * @head: the head of the list.
 */
void free_list(hash_node_t *head)
{
	int a;
	hash_node_t *temp;

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
 * hash_table_delete - free a hash table.
 * @ht: the hash table.
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned int a;

	for (a = 0; a < ht->size; a++)
	{
		while (ht->array[a])
		{
			free_list(ht->array[a]);
			a++;
		}
	}
	free(ht->array);
	free(ht);
}
