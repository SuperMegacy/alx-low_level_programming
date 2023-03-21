#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints out multiple numbers.
 * prints results of multiplication, then a new line.
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 1 if it does not get two arguments.
 */

int main(int argc, char *argv[])
{
	int i, mul;

	mul = 1;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
