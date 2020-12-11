#include "lists.h"

/**
 * get_dnodeint_at_index - this function get a node at index.
 * @head: the list.
 * @index: the index.
 * Return: the node at index.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int a;

	for (a = 0; a < index; a++)
	{
		head = head->next;
	}
	return (head);
}
