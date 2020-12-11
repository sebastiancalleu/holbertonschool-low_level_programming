#include "lists.h"

/**
 * free_dlistint - frees lists.
 * @head: the list.
 */

void free_dlistint(dlistint_t *head)
{
	int a;
	dlistint_t *tmp1;

	tmp1 = head;
	for (a = 0; head != NULL; a++)
	{
		head = head->next;
		free(tmp1);
		tmp1 = head;
	}
}
