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
 * insert_dnodeint_at_index - this function add a node at a given index.
 * @h: the list.
 * @idx: the index.
 * @n: data to insert.
 * Return: the new node.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int a;
	dlistint_t *newnode, *tmp;

	if ((idx > (dlistint_len(*h) - 1)) || (*h == NULL))
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	if (idx == dlistint_len(*h))
		return (add_dnodeint_end(h, n));
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	tmp = *h;
	for (a = 1; tmp != NULL; a++)
	{
		if (a == idx)
		{
			newnode->next = tmp->next;
			newnode->prev = tmp;
			tmp->next = newnode;
			newnode->next->prev = newnode;
			break;
		}
		tmp = tmp->next;
	}
	return (newnode);
}
