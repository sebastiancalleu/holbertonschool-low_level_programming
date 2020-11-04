#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - this function frees a list and set head to null.
 * @head: the list.
 */
void free_listint2(listint_t **head)
{
	int a;
	listint_t *tmp;

	if ((*head) == NULL)
		return;
	for (a = 0; *head; a++)
	{
		tmp = (*head);
		(*head) = (*head)->next;
		free(tmp);
	}
	*head = NULL;
}
