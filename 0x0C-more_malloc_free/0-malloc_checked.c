#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: argument passed by function
 *
 * Return: none
 */

void *malloc_checked(unsigned int b)
{
	void *myptr;

	myptr = malloc(b);
	if (myptr == NULL)
		exit(98);

	return (myptr);
}
