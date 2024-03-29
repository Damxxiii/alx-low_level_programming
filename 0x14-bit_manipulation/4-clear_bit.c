#include "main.h"

/**
 * clear_bit - unction that sets the value of a bit to 0 at a given index.
 * @n: ptr
 * @index: index
 *
 * Return: 1 on success otherwise -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 45)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
