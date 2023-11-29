#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - main function
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	size_t n, o, x;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (n = 0; name[n]; n++)
		;
	n++;
	dog->name = malloc(sizeof(char) * n);
	if (dog->name == NULL)
	{
		free(dog->name);
		return (NULL);
	}
	for (x = 0; x < n; x++)
		dog->name[x] = name[x];
	dog->age = age;
	for (o = 0; owner[o]; o++)
		;
	o++;
	dog->owner = malloc(sizeof(char) * o);
	if (dog->owner == NULL)
	{
		free(dog->owner);
		free(dog);
		return (NULL);
	}
	for (x = 0; x < o; x++)
		dog->owner[x] = owner[x];
	return (dog);
}
