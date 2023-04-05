#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - Prints the result of simple operations.
 * @argc: argument counter.
 * @argv: argument vector.
 *
 * Return: Always 0.
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int var1, var2;
	char *ptr;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	var1 = atoi(argv[1]);
	ptr = argv[2];
	var2 = atoi(argv[3]);

	if (get_op_func(ptr) == NULL || ptr[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*ptr == '/' && var2 == 0) ||
	    (*ptr == '%' && var2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(ptr)(var1, var2));

	return (0);
}
