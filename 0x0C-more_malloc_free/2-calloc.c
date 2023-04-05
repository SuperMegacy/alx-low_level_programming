#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: array elements
 * @size: size of array
 *
 * Return: none
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *c = malloc(nmemb * size);
	unsigned int i = 0;

	if (!c)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		c[i] = 0;

	return (c);
}
