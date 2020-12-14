#include "lists.h"

/**
 * add_dnodeint - this functions adds a node at beginning.
 * @head: the list.
 * @n: data to insert.
 * Return: the new node.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->prev = NULL;
	if (*head == NULL)
	{
		*head = newnode;
		newnode->next = NULL;
	}
	else
	{
		newnode->next = *head;
		(*head)->prev = newnode;
		*head = newnode;
	}
	return (newnode);
}
