#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - this function adds a node at start.
 * @head: the list start.
 * @n: data of the new node.
 * Return: the node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = (*head);
	(*head) = new;
	return (new);
}
