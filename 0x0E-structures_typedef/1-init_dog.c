#include "main.h"
#include <stdio.h>

/**
 * init_dog - Inits a struct dogo
 * @d: pointer to the struct dogo bariable to initialize
 * @name: Name of dogo
 * @age: age of dogo
 * @owner: owner of dogo
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
