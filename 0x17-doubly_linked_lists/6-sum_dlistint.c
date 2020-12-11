#include "lists.h"

/**
 * sum_dlistint - the sum of the list.
 * @head: the list.
 * Return: the sum.
 */

int sum_dlistint(dlistint_t *head)
{
	int a, sum = 0;

	for (a = 0; head != NULL; a++)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
