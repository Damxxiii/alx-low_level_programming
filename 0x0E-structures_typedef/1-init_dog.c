#include "dog.h"
#include <stdlib.h>
/**
 * init_dog -  initialize a variable of type
 * @d: ptr to struct dog
 * @name: name of dog
 * @owner: owner of dof
 * @age: age of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->owner = owner;
	d->age = age;
}
