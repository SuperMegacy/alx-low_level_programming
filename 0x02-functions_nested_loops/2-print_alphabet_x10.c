#include "main.h"

/**
 * main - alphabet game lower case
 * void - print alphabets from a to z 10x
 */
void print_alphabet_x10(void)
{
        char i;
	int j;
	
	for (j = 0; j <= 10; j++)
	{
        	for (i = 'a'; i <= 'z'; i++)
        	{
                	_putchar(i);
		}
		_putchar('\n');
	}
}
