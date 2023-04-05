#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallpcates a memory block using malloc and free
 * @ptr: pointer to memory previously allocated with malloc
 * @old_size: size in bytes of allocated space for ptr
 * @new_size: new size in bytes for new memory block
 *
 * Return: none
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr = malloc(new_size ? new_size : 1);
	char *old_ptr = ptr ? ptr : new_ptr;
	unsigned int i;

	if (!new_ptr)
		return (NULL);

	for (i = 0; i < (old_size < new_size ? old_size : new_size); i++)
	{
		new_ptr[i] = old_ptr[i];
	}

	free(ptr);

	return (new_ptr);
}
