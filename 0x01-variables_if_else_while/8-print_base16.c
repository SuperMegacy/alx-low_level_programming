#include <stdio.h>

/**
 * main - Hexadecimal
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	int h;

	for (i = 48; i < 58; i++)
		putchar(i);

	for (h = 97; h < 103; h++)
		putchar(h);

	putchar('\n');
	return (0);
}
