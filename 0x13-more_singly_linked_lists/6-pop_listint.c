#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - this function deletes the head.
 * @head: the list.
 * Return: the eliminated data.
 */
int pop_listint(listint_t **head)
{
	int a;
	listint_t *tmp;

	if (*head == NULL)
		return (0);
	tmp = (*head);
	a = tmp->n;
	(*head) = (*head)->next;
	free(tmp);
	return (a);
}
