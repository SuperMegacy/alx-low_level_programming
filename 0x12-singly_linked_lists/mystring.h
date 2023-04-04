#ifndef MYSTRING_H
#define MYSTRING_H

#include <stdio.h>

/**
 * _strlen - function that returns the length of a string.
 * @s : s is a character
 *
 * Return: value is i
 */

int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '0')
	{
		i++;
	}

	return (i);
}
#endif
