#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - this function add nodes at end.
 * @head: the list.
 * @n: new data.
 * Return: the node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	int a;
	listint_t *new = malloc(sizeof(listint_t)), *tmp;

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if ((*head) == NULL)
	{
		(*head) = new;
	}
	else
	{
		tmp = (*head);
		for (a = 0; tmp->next != NULL; a++)
		{
			tmp = tmp->next;
		}
		tmp->next = new;
	}
	return (new);
}
