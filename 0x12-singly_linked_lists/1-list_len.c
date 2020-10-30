#include "lists.h"
/**
 * list_len - this function returns the number of nodes in a linked list.
 * @h: pointer to head.
 * Return: the count.
 */
size_t list_len(const list_t *h)
{
	int a;

	for (a = 1; a > 0; a++)
	{
		if (h->next == NULL)
		{
			break;
		}
		h = h->next;
	}
	return (a);
}
