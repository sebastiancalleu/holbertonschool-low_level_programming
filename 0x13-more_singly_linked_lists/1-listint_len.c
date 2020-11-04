#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * listint_len - this function prints the lenght of a list.
 * @h: the list.
 * Return: the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t a;

	for (a = 0; h; a++)
	{
		h = h->next;
	}
	return (a);
}
