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
 * add_node - this function adds a node.
 * @head: pointer to a pointer of a struct.
 * @str: string to add to the new node.
 * Return: the node;
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *newnode = malloc(sizeof(list_t));

if (newnode == NULL)
{
	return (NULL);
}
newnode->len = _strlen(str);
newnode->str = strdup(str);
newnode->next = (*head);
(*head) = newnode;
return (newnode);
}
