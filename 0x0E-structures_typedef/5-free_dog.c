#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_dog - this function frees the dog struct.
 * @d: the struct.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	else
	{
	free(d->name);
	free(d->owner);
	free(d);
	}
}
