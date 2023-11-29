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
	size_t nl, ol, x;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	for (nl = 0; name[nl]; nl++)
		;
	nl++;
	dog->name = malloc(sizeof(char) * nl);
	if (dog->name == NULL)
	{
		free(dog->name);
		return (NULL);
	}
	for (x = 0; x < nl; x++)
		dog->name[x] = name[x];
	dog->age = age;
	for (ol = 0; owner[ol]; ol++)
		;
	ol++;
	dog->owner = malloc(sizeof(char) * ol);
	if (dog->owner == NULL)
	{
		free(dog->owner);
		free(dog);
		return (NULL);
	}
	for (x = 0; x < ol; x++)
		dog->owner[x] = owner[x];
	return (dog);
}
