#include "lists.h"

/**
 * dlistint_len - this function calculates the lengh of a list.
 * @h: the list.
 * Return: the number of elements.
 */

size_t dlistint_len(const dlistint_t *h)
{
	int a = 0;

	for (a = 0; h != NULL; a++)
	{
		h = h->next;
	}
	return (a);
}

/**
 * get_dnodeint_at_index - this function get a node at index.
 * @head: the list.
 * @index: the index.
 * Return: the node at index.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int a;
	if (index > (dlistint_len(head) - 1))
	{
		return(NULL);
	}
	for (a = 0; a < index; a++)
	{
		head = head->next;
	}
	return (head);
}
