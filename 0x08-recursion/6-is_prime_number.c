#include "main.h"
/**
 *_prime_a - returns 1 if the input integer is a prime number
 * @n: integer
 * @b: divisor
 * Return: 0
 */

int _prime_a(int n, int b)
{
	if (n <= 1 || (n != b && n % b == 0))
	{
		return (0);
	}
	else if (n == b)
	{
		return (1);
	}
	return (_prime_a(n, b + 1));
}
/**
 * is_prime_number -  prime number
 * @n: input
 * Return: 0 or 1
 */

int is_prime_number(int n)
{
	return (_prime_a(n, 2));
}
