#include "lists.h"
/**
 * _strlen - this function calculates the length.
 * @str: the string.
 * Return: the length.
 */
int _strlen(const char *str)
{
int a;
for (a = 0; str[a] != 0; a++)
{
}
return (a);
}

/**
 * add_node_end - function that adds a node at the end of the list.
 * @head: pointer to a pointer to a struct.
 * @str: the string to add to the node.
 * Return: the node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *temp;
list_t *newnode = (list_t *) malloc(sizeof(list_t));
if (newnode == NULL)
{
	return (NULL);
}
newnode->len = _strlen(str);
newnode->str = strdup(str);
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
