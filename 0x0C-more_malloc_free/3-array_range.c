#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: min value
 * @max: max value
 * Return: int ptr
 */

int *array_range(int min, int max)
{
	int i, len;
	int *j;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	j = malloc(sizeof(int) * len);
}
