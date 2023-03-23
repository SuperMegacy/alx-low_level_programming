#include "main.h"

/**
 * create_array - creates an array of chars and initializes it with
 * a specific char
 * @size: the size of the array
 * @c: the chars
 *
 * Return: Null if size is 0, or pointer to array if it fails
 */

char *create_array(unsigned int size, char c)
{
	int i;
	char *a;

	a = malloc(sizeof(char) * size);
	if (a == 0 || a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	a[i] = '\0';
	return (a);
}

