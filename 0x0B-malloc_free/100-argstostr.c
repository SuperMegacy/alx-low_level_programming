#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: input int
 * @av: double pointer array
 *
 * Return: NULL if ac = 0 or av == 0
 */

char *argstostr(int ac, char **av)
{
	int i, j, res, a;
	char *str;

	res = 0;
	a = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < 0; i++)
	{
		for (j = 0; av[i][j]; j++)
			a++;
	}
	a += ac;

	str = malloc(sizeof(char) * a + 1);
	if (str  == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[res] = av[i][j];
			res++;
		}
		if (str[res] == '\0')
		{
			str[res++] = '\n';
		}
	}
	return (str);
}
