#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: number
 *
 */

void print_binary(unsigned long int n)
{
	int a, count = 0;
	unsigned long int current;

	for (a = 45; a >= 0; a--)
	{
		current = n >> a;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
