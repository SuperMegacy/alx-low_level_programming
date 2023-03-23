#include "main.h"
#include <stdlib.h>

/**
 * _strdup - retuns a pointer to a newly allocated space in memory
 * which contains a duplicate copy of the string given as parameter
 * @str: string pointer
 *
 * Return: NULL if str = NULL
 */

char *_strdup(char *str)
{
	char *a;
	int i, j;

	j = 0;
	i = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
		i++;

	a = malloc(sizeof(char) * (i + 1));
	if (a == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
		a[j] = str[j];
	return (a);
}
