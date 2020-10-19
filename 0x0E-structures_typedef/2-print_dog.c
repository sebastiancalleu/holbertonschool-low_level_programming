#include "dog.h"
#include "stdio.h"
/**
 * print_dog - this function prints a struct.
 * @d: the struct.
 *
 * Description: this function prints a struct.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
	if ((*d).name == NULL)
	{
		(*d).name = "(nil)";
	}
	if ((*d).owner == NULL)
	{
		(*d).owner = "(nil)";
	}
	printf("Name: %s\nAge: %0.1f\nOwner: %s\n", (*d).name, (*d).age, (*d).owner);
	}
}

