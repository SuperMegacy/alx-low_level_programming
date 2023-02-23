#include <stdio.h>

/**
 * main - Putchar
 *
 * Return: Always (success)
 */
int main(void)
{
        char lwcase;
        char q, e;

	q = 'q';
	e = 'e';
	
        for (lwcase = 'a'; lwcase <= 'z'; lwcase)
	{
		if (lwcase != q && lwcase != e)
		{
        		putchar(lwcase);
		}
	}
        putchar('\n');
        return (0);
}
