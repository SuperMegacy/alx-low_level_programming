#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum range of itegers
 * @max: max number of values to be stored
 *
 * Return: NULL if min > max or if malloc fails.
 */

int *array_range(int min, int max)
{
	int *arr;
	int i, len;

	if (min > max)
		return (NULL);

	len = max - min + 1;
	arr = malloc(sizeof(int) * len);

	if (!arr)
		return (NULL);

	for (i = 0; i < len; i++, min++)
		*(arr + i) = min;

	return (arr);
}
