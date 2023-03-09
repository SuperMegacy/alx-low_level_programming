#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: number to return to the factoria form
 * Return: -1 if n is lower than 0.
 */

int factorial(int n)
{
	if (n <= 1)
	{
		return (-1);
	}
	else
		return (n * factorial(n - 1));
}
