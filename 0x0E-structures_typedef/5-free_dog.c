#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function to free memory allocated for the structure
 * @d: dog structure
 *
 * Return: none
 */

void free_dog(dog_t *d)
{
	free(d->owner);
	free(d->name);
	free(d);
}
