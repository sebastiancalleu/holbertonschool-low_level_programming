#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - this function add a node at given index.
 * @head: the list.
 * @idx: the index.
 * @n: the data for the new node.
 * Return: the node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *new = malloc(sizeof(listint_t)), *tmp;

	if (new == NULL || head == NULL)
	{
		return (NULL);
	}
	new->n = n;
	tmp = *head;
	for (a = 0; tmp; a++)
	{
		if (a == idx)
		{
			new->next = tmp->next;
			tmp->next = new;
			return (new);
		}
		tmp = tmp->next;
	}
		return (NULL);
}
