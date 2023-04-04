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

/**
 * dog_t - typedef new type as a new name for the type struct dog.
 */

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
