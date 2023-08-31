#include "main.h"
#include <stdio.h>
/**
 * sqrt_a -  returns the natural square root of a number
 * @a: natural squareroot
 * @b: iterator
 * Return: squareroot or -1
 */

int sqrt_a(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (sqrt_a(a, b + 1));
}

/**
 * _sqrt_recursion -  returns the natural square root of a number
 * @n: input
 * Return: natural squareroot
 */
int _sqrt_recursion(int n)
{
	return (sqrt_a(n, 0));
}
