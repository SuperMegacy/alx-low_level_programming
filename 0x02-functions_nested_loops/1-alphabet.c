#include "main.h"

/**
 * main - alphabet game lower case
 *
 * Return: always 0 (success)
 */

void print_alphabet(void) /* prints alphabets */
{
	int i;

	for (i = 96; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
