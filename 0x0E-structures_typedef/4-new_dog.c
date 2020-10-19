#include "dog.h"
#include <stdlib.h>
int auxfun(char *str);
/**
 * new_dog - this function create a new dog.
 * @name: the new dog name.
 * @age: the new dog age.
 * @owner: the new dog owner
 * Return: the new dog.
 *
 * Description: this function creates a totally new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	int a;

	newdog = malloc(sizeof(dog_t));
	if (!newdog)
	{
		return (NULL);
	}
	newdog->name = malloc(auxfun(name) + 1);
	if (!newdog->name)
	{
		return (NULL);
	}
	for (a = 0; name[a]; a++)
	{
		newdog->name[a] = name[a];
	}
	newdog->name[a] = '\0';
	newdog->age = age;
	newdog->owner = malloc(auxfun(owner) + 1);
	if (!newdog->owner)
	{
		return (NULL);
	}
	for (a = 0; owner[a]; a++)
	{
		newdog->owner[a] = owner[a];
	}
	return (newdog);
}

/**
 * auxfun - this function counts the number of chars of a string.
 * @str: the string.
 * Return: the count.
 *
 */
int auxfun(char *str)
{
	int a;

	for (a = 0; str[a]; a++)
	{
	}
	return(a);
}
