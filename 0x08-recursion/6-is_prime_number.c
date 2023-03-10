#include "main.h"

/**
 * is_prime_number - returns 1 if the input integer is
 * a prime number, else returns a 0.
 * @n: the evaluated integer number
 *
 * Return: 1 if interger, 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime_no(n, n - 1));
}

/**
 * prime_no - evaluates if number is a prime recursively
 * @n: number to be evaluated
 * @i: an iterator number
 *
 * Return: 1 if n is a prime, else return 0.
 */

int prime_no(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	else if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (prime_no(n, i - 1));
}
