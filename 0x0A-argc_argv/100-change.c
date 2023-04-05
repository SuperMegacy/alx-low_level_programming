#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: arguments counter
 * @argv: arguments vector
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int var, j, res;
	int my_var[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	var = atoi(argv[1]);
	res = 0;

	if (var < 0)
	{
		printf("0\n");
		return (0);
	}

	for (j = 0; j < 5 && var >= 0; j++)
	{
		while (var >= my_var[j])
		{
			res++;
			var -= my_var[j];
		}
	}

	printf("%d\n", res);
	return (0);
}
