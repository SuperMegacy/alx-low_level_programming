#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string to be concatenated
 * @s2: second string to concatenate with s1
 * @n: checks for signs
 *
 * Return: NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x = s1 ? strlen(s1) : 0;
	unsigned int y = s2 ? strlen(s2) : 0;
	unsigned int z;
	char *s = malloc(sizeof(char) * (x + (y < n ? y : n) + 1));

	if (!s)
		return (NULL);
	for (z = 0; z < x; z++)
		s[z] = s1[z];
	for (z = 0; z < (y < n ? y : n); z++)
		s[z + x] = s2[z];
	s[x + (y < n ? y : n)] = '\0';

	return (s);
}
