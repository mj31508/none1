#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initializing a variable type
 * @d: pointer for dog
 * @age: pointer
 * @name: another pointer
 * @owner: for age variable
 * Return - zero
 **/

void init_dog(struct dog *d, char *name, float age, char *owner)

{
	if (d != NULL)
	d->name = name;
	d->age = age;
	d->owner = owner;
}
