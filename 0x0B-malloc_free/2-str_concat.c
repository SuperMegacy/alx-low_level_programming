#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * str_concat - concatenates two string
 * @s1: stores the address of the first string
 * @s2: stores the address of the last string which is the end
 *
 * Return: NULL if str is Null.
 */

char *str_concat(char *s1, char *s2)
{
	char *res;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	res = malloc(sizeof(char) * (i + j + 1));

	if (res == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		res[i] = s1[1];
		i++;
	}

	while (s2[j] != '\0')
	{
		res[i] = s2[j];
		i++, j++;
	}
	res[i] = '\0';
	return (res);
}
