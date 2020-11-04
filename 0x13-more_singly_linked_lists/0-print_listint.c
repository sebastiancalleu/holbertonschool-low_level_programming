#include "lists.h"
/**
 * print_listint - this function print a list.
 * @h: the list.
 * Return: size of list.
 */
size_t print_listint(const listint_t *h)
{
	size_t a;

	for (a = 0; h; a++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (a);
}
