#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - prints strings followed by a new line.
 * if separator is NULL, don't print it.
 * if one of the string is NULL, print (nil) instead.
 * @separator: string to be printed.
 * @n: number of strings passed to the function.
 * @...: ellipse.
 *
 * Return: none
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *sap;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		sap = va_arg(ap, char *);
		if (sap)
		{
			printf("%s", sap);
		}
		else
			printf("(nil)");
		if (separator !=  NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
