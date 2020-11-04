#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - this function get a node from the list.
 * @head: the list.
 * @index: the index.
 * Return: the node at index.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a;

	if (head == NULL)
		return (NULL);
	for (a = 0; head; a++)
	{
		if (a == index)
		{
			return (head);
		}
		head = head->next;
	}
		return (NULL);
}
