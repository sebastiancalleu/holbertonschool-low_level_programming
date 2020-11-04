#include "lists.h"
#include <stdlib.h>
/**
 * reverse_listint - this function reverses a list.
 * @head: the list.
 * Return: pointer to the first node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *curr;

	if (*head == NULL)
	{
		return;
	}
	prev = *head;
	*head = (*head)->next;
	curr = *head;
	prev->next = NULL;
	while (*head != NULL)
	{
		*head = (*head)->next;
		curr->next = prev;
		prev = curr;
		curr = *head;
	}
	*head = prev;
	return (*head);
}
