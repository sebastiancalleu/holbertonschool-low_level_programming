#include "lists.h"
/**
 * add_node - this function adds a node.
 * @head: pointer to a pointer of a struct.
 * @str: string to add to the new node.
 * Return: the node;
 */
list_t *add_node(list_t **head, const char *str)
{
char *s = strdup(str);
unsigned int a;
list_t *newnode = malloc(sizeof(list_t));

if (newnode == NULL)
{
	return (NULL);
}
for (a = 0; s[a]; a++)
{
}
newnode->len = a;
newnode->str = s;
newnode->next = (*head);
(*head) = newnode;
return (newnode);
}
