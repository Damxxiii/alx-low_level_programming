#include "main.h"

/**
 * get_bit - returns the value of a bit on an integer
 * @n: number to search
 * @index: index
 *
 * Return: value
 */

int get_bit(unsigned long int *n, unsigned int index)
{
	int bit_value;

	if (index > 45)
		return (-1);

	bit_value = (n >> index) &1;
	return (bit_value);
}
