#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - sets a variable of the struct dog type to zero
 * @d: pointer to initialize struct dog
 * @name: name's dog
 * @age: age's dog
 * @owner: owner's name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	d->name = name;
	d->age = age;
	d->owner = owner;
}
