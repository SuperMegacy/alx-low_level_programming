#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a variable of type struct dog.
 * @d: my dog
 * @name: dog name
 * @age: age of dog
 * @owner: dog owner
 *
 * Return: none
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	       d = malloc(sizeof(struct dog));	
	d->name = name;
	d->age = age;
	d->owner = owner;
}
