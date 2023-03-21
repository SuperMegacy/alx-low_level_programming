#include <stdio.h>

/**
 * main - prints all arguments it receives.
 * all arguments are printed including the first ona.
 * only prints one argument per line.
 * @argc: argument counter.
 * @argv: argument vector.
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
