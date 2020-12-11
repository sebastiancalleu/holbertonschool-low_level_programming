#include "lists.h"

/**
 * dlistint_len - this function calculates the lengh of a list.
 * @h: the list.
 * Return: the number of elements.
 */

size_t dlistint_len(const dlistint_t *h)
{
	int a = 0;

	for (a = 0; h != NULL; a++)
	{
		h = h->next;
	}
	return (a);
}

/**
 * delete_dnodeint_at_index - this function deletes a node at index.
 * @head: the list.
 * @index: the index.
 * Return: 1 if succes, -1 if it fails.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int a, flag = 0;
	dlistint_t *tmp1, *tmp2;

	if (*head == NULL)
		return (-1);
	tmp1 = *head;
	if (index == 0)
	{
		if (dlistint_len(*head) == 1)
		{
			free(*head);
			*head = NULL;
		}
		else
		{
			*head = (*head)->next;
			(*head)->prev = NULL;
			free(tmp1);
		}
		return (1);
	}
	tmp2 = *head;
	tmp2 = tmp2->next;
	for (a = 1; tmp1 != NULL; a++)
	{
		if (a == index)
		{
			tmp1->next = tmp2->next;
			tmp2->next->prev = tmp1;
			free(tmp2);
			flag = 1;
			break;
		}
		tmp1 = tmp1->next;
		tmp2 = tmp2->next;
	}
	if (flag == 1)
		return (1);
	return (-1);
}
