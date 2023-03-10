#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 *
 * Return: 1 if string is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	return (pal(s, 0, _strlength(s)));
}

/**
 * _strlength - returns the length of a string
 * @s: calculates the string
 *
 * Return: length of string
 */

int _strlength(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlength(s + 1));

}

/**
 * pal - checks for palindrome
 * @s: string to be evaluated
 * @i: an iterator
 * @l: length of string
 *
 * Return: 1 if palindrome
 */

int pal(char *s, int i, int l)
{
	if (*(s + i) != *(s + l - 1))
		return (0);
	else if (i >= l)
		return (1);
	return (pal(s, i + 1, l - 1));

}
