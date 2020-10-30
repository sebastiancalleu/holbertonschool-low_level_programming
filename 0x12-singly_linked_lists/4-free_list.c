#include "lists.h"
/**
 * free_list - this function free the list
 * @head: the head of the list.
 */
void free_list(list_t *head)
{
int a;
list_t *temp;

for (a = 0; head->next != NULL; a++)
{
	temp = head->next;
	free(head->str);
	free(head);
	head = temp;
}
free(head->str);
free(head);
}
