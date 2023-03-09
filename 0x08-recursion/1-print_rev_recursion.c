#include "main.h"

/**
 * -print_rev_recursion.c - Prints a string in reverse
 *  @s: The string pointer to be printed.
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
