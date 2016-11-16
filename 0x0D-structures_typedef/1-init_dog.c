#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initializing a variable type
 * @age: pointer
 * @name: another pointer
 * @owner: for age variable
 * Return - zero
 **/

void init_dog(struct dog *d, char *name, float age, char *owner)
/**
 * init_dog - takeps pointer to dog and initializes components
 *
 * @d: pointer to dog variable
 * @name: pointer of name to the dog
 * @age: float age of dog
 * @owner: pointer character of owner
 * Return: none
 **/
{
	if (d != NULL)
	{
	return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
