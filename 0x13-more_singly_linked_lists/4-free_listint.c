#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - this function free a list.
 * @head: the list.
 */
void free_listint(listint_t *head)
{
	int a;
	listint_t *tmp;

	for (a = 0; head; a++)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	free(head);
}
