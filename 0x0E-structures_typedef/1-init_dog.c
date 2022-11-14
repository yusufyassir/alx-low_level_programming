#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initialize variable of struct gdog
 * @name: dogs name
 * @age: dogs age
 * @owner: owners name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
