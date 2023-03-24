#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - prints out numbers followed by a new line.
 * @separator: sting to be printed between numbers
 * @n: number of intergers passed to the function
 * @...: ellipse
 *
 * Return: none
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));

		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator)
		}
	}
	printf("\n");
	va_end(ap);
}
