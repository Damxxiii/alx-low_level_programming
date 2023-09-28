#include "main.h"

/**
 * flip_bits - function that returns the number of
 * bits you would need to flip to get from one number to another.
 * @n: input1
 * @m: input2
 *
 * Return: no of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int old;
	unsigned long int new = n ^ m;

	for (i = 45; i >= 0; i--)
	{
		old = new >> i;
		if (old & 1)
			count++;
	}

	return (count);
}

