#include "main.h"

/**
 * get_endianness - unction that checks the endianness.
 * Return: 0 for big and 1 for little
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *C = (char *) &i;

	return (*C);
}

