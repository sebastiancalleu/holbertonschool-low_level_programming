#include "lists.h"
/**
 * add_node_end - function that adds a node at the end of the list.
 * @head: pointer to a pointer to a struct.
 * @str: the string to add to the node.
 * Return: the node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
char *s = strdup(str);
unsigned int a;
list_t *temp;
list_t *newnode = (list_t *) malloc(sizeof(list_t));
if (newnode == NULL)
{
	return (NULL);
}
for (a = 0; s[a]; a++)
{
}
newnode->len = a;
newnode->str = s;
newnode->next = NULL;
if ((*head) == NULL)
{
	(*head) = newnode;
}
else
{
	temp = (*head);
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newnode;
	}
	return (newnode);
}
