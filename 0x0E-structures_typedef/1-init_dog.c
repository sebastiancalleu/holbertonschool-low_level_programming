#include "dog.h"
/**
 * init_dog - this function initialize a struct.
 * @d: the struct.
 * @name: the name.
 * @age: the age.
 * @owner: the owner.
 *
 * Description: this function take the variables and put a value for them.
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
