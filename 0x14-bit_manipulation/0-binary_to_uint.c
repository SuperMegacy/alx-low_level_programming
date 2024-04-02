#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - function coverts a binary number to unsigned int.
 * @b: pointer to a string of 1 and 0
 *
 * Return: the converted number or 0 if error
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int var;

	var = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		var = var << 1;
		if (b[i] == '1')
			var = var + 1;
	}
	return (var);
}
