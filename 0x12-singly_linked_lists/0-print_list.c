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
	const list_t *b;

	b = h;
	for (a = 1; a > 0; a++)
	{
		if (b->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", (*b).len, (*b).str);
		}
		if (b->next == NULL)
		{
			break;
		}
		b = b->next;
	}
	return (a);
}
