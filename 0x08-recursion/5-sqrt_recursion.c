#include "main.h"

/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: stores natural quare root
 *
 * Return: the natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (sqrt_recursion(n, 0));
}

/**
 * sqrt_recursion - finds the natural square root
 * @n: calculates the square root of a number
 * @i: an iterator
 *
 * Return: the calculated square root
 */

int sqrt_recursion(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	return (sqrt_recursion(n, i + 1));
}
