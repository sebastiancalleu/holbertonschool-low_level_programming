#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - this function prints a hash table.
 * @ht: the hash table.
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *cpynode;
	unsigned int a, b;

	if (ht == NULL)
		printf("{}\n");
	else
	{
	printf("{");
		for (a = 0; a < ht->size; a++)
		{
		if (ht->array[a] != NULL)
		{
			cpynode = ht->array[a];
			while (cpynode)
			{
				printf("'%s': '%s'", cpynode->key, cpynode->value);
				cpynode = cpynode->next;
				for (b = a + 1; b < ht->size; b++)
				{
					if (ht->array[b] != NULL)
					{
					printf(", ");
					break;
					}
				}
			}
		}
		}
		printf("}\n");
	}
}
