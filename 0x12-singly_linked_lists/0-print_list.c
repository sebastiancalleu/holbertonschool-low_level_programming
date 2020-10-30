#include "lists.h"
#include <stdio.h>
/**
 * print_list - this function prints a linked list.
 * @h: pointer to the head.
 * Return: number of nodes of the list.
 */
size_t print_list(const list_t *h)
{
	size_t a;

	for (a = 1; a > 0; a++)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", (*h).len, (*h).str);
		}
		if (h->next == NULL)
		{
			break;
		}
		h = h->next;
	}
	return (a);
}
