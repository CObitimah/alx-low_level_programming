#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - the dog struct
 * @d: pointer to struct the new dog
 * @name: the name of the new dog
 * @age: the age of the new dog
 * @owner: the owner of the new dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	(*d) .name = name;
	d->age = age;
	d->owner = owner;
}
