#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - this function sum all the data of a list.
 * @head: the list.
 * Return: the sum.
 */
int sum_listint(listint_t *head)
{
	int sum, a;

	if (head == NULL)
	{
		return (0);
	}
	else
	{
		sum = 0;
	for (a = 0; head; a++)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
	}
}
