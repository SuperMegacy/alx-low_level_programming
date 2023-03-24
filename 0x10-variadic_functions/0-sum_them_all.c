#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - adds up all its parameters.
 * @n: last required argument.
 * @...: ellispe
 *
 * Return: 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i = 0, sum = 0;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
}
