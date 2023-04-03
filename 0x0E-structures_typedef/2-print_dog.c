#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - prints struct dog
 * @d: dog struct
 *
 * Return: none
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
		d = malloc(sizeof(d));
	}
	if (d->name == NULL)
	{
		d->name = "(nil)";
	}
	if (d->owner == NULL)
	{
		d->owner = "(nil)";
	}
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
