#include "lists.h"

/**
 * print_dlistint - this function prints a list.
 * @h: the list.
 * Return: number of elements in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int a;

	for (a = 0; h != NULL; a++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (a);
}
