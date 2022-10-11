#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initializes variable struct dog
 * @d: pointer to struct Dog
 * @name: name of the Dog
 * @age: Dog age
 * @owner: name of the owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}

