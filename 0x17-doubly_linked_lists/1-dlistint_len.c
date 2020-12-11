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
