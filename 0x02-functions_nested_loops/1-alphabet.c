#include "main.h"

/**
 * main - alphabet game lower case
 * void - print alphabets from a to z
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
