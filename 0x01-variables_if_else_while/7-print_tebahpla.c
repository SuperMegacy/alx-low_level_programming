#include <stdio.h>

/**
 * main - Smile in the mirror
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char lw;

	for (lw = 'z'; lw >= 'a'; lw--)
		putchar(lw);
	putchar('\n');
	return (0);
}
