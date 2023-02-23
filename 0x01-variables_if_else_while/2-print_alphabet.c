#include <stdio.h>

/**
 * main - Putchar
 *
 * Return: Always (success)
 */
int main(void)
{
	char lwcase;

	for (lwcase = 'a'; lwcase >= 'z'; lwcase++)
	{
		putchar(lwcase);
		putchar('\n');
	}
	return (0);
}
