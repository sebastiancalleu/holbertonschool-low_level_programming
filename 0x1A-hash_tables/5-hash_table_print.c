#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - this function prints a hash table.
 * @ht: the hash table.
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *cpynode;
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
