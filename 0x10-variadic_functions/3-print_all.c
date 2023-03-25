#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - a function that prints anything
 * @format: a list of tyoes of argumn=ents passed to the function
 * @...: ellipse
 *
 * Return: none
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0, j = 0, c = 0;
	char *sap;
	const char arg[] = "cifs";
	va_list ap;

	va_start(ap, format);
	while (format && format[i])
	{
		j;
		while (arg[j])
		{
			if (format[i] == arg[j] && c)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int)), c = 1;
				break;
			case 'i':
				printf("%d", va_arg(ap, int)), c = 1;
				break;
			case 'f':
				printf("%f", va_arg(ap, double)), c = 1;
				break;
			case 's':
				sap = va_arg(ap, char *), c = 1;
				if (!sap)
				{
					printf("nil");
					break;
				}
				printf("%s", sap);
				break;
		} i++;
	}
	printf("\n"), va_end(ap);
}
