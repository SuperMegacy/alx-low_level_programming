#include <stdio.h>

/**
 * main - prints the number of argunments passed into it.
 * program prints the number followed by a new line.
 * @argc: argument counter.
 * @argv: argument vector.
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[] __attribute__ ((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
