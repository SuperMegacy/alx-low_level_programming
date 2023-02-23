#include <stdio.h>

/**
 * main - Putchar
 *
 * Return: Always (success)
 */
int main(void)
{
        char lwcase;
	char bgcase;

        for (lwcase = 'a'; lwcase <= 'z'; lwcase++)
        putchar(lwcase);

	for (bgcase = 'A'; bgcase <= 'Z'; bgcase++)
		putchar(bgcase);
        putchar('\n');
        return (0);
}
