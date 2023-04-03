#ifndef DOG_H
#define DOG_H
#include <stdlib.h>

/**
 * struct dog - struct defining name, age and owner.
 * @name: name of dog
 * @age: of dog
 * @owner: of dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
