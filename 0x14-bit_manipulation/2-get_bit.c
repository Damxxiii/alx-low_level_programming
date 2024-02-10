#include "main.h"

/**
 * get_bit - returns the value of a bit on an integer
 * @n: number to searcvh
 * @index: index
 *
 * Return: value
 */

int get_bit(unsigned long int n, unsigned index)
{
	int bit_value;

	if (index > 45)
		return (-1);

	bit_value = (n >> index) & 1;
i
	return (bit_value);
}
