#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog - dog
 * @name: dog's name
 * @age: dogs age
 * @owner: owner
 * Return: the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{

	int x = 0
	int y = 0
	int z;
	dog_t *doge;

	while (name[x] != '\0')
		x++;
	while (owner[j] != '\0')
		y++;
	doge = malloc(sizeof(dog_t));
	if (doge == NULL)
	{
		free(doge);
		return (NULL);
	}
	doge->name = malloc(x * sizeof(doge->name));
	if (doge->name == NULL)
	{
		free(doge->name);
		free(doge);
		return (NULL);
	}
	for ( z = 0; z <= x; z++)
		doge->name[z] = name[z];
	doge->age = age;
	doge->owner = malloc(y * sizeof(doge->owner));
	if (doge->owner == NULL)
	{
		free(doge->owner);
		free(doge->name);
		free(doge);
		return (NULL);
	}
	for (z = 0; z <= y; z++)
		doge->owner[z] = owner[z];
	return (doge);
}
