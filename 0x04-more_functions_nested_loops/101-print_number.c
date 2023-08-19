#include "main.h"
#include <stdio.h>

/**
 * print_number - prints an integer
 * @n: integer to be printed
 */

void print_number(int n)
{
	unsigned int m = n;

	if (n < 0)
	{
		n *= -1;
		m = n;
		putchar('-');
	}

	m /= 10;

	if (m != 0)
		print_number(m);

	putchar((unsigned int) n % 10 + '0');

}
