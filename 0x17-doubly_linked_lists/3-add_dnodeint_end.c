#include "lists.h"

/**
 * add_dnodeint_end - adds a node at end of a list.
 * @head: the list.
 * @n: the data of the new node.
 * Return: the new node.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *tmp;
	int a;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
	{
		newnode->prev = NULL;
		*head = newnode;
		return (newnode);
	}
	tmp = *head;
	for (a = 0; tmp->next != NULL; a++)
	{
		tmp = tmp->next;
	}
	tmp->next = newnode;
	newnode->prev = tmp;
	return (newnode);
}
