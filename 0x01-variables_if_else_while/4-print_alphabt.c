#include <stdio.h>

/**
 * main - Putchar
 *
 * Return: Always (success)
 */
int main(void)
{
        char lwcase;

        for (lwcase = 'a'; lwcase <= 'z'; lwcase++)
	{
		if (lwcase != 'q' && lwcase != 'e')
		{
        		putchar(lwcase);
		}
	}
        putchar('\n');
        return (0);
}
