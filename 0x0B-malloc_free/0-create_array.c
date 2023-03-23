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
	
	if (size = 0)
	{
		return (NULL);
	}
	else 
	{
		c = malloc(sizeof(char) * size);
		if (!malloc(sizeof(char) * size))
			{
				return (NULL);
			}
	}
}

