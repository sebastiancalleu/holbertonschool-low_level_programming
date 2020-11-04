#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - this function deletes a node.
 * @head: the list.
 * @index: the index to delete.
 * Return: 1 if success, -1 if not.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int a;
	listint_t *tmp, *tmp2;

	if (*head == NULL)
		return (-1);
	tmp = *head;
	if (index > 0)
	{
		for (a = 0; tmp; a++)
		{
			if (a == (index - 1))
			{
			tmp2 = tmp->next;
			tmp->next = tmp2->next;
			free(tmp2);
			return (1);
			}
			tmp = tmp->next;
		}
		return (-1);
	}
	else
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
}
