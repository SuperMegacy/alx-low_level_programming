#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 * prints the results followed by a new line
 * prints 0 is no number is passed to the program then a ne line.
 * if there is a char prints Error
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 1 if there is a char
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (!atoi(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += atoi(argv[i]);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
