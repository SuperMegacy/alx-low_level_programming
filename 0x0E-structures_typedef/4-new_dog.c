#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog structure
 * @name: name of the dog
 * @age: dog age
 * @owner: dog owner name
 *
 * Return: dog
 * Description: cretes a new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	size_t name_len, owner_len;

	name_len = strlen(name) + 1;
	owner_len = strlen(owner) + 1;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(name_len);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(owner_len);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	strcpy(dog->name, name);
	dog->age = age;
	strcpy(dog->owner, owner);

	return (dog);
}
