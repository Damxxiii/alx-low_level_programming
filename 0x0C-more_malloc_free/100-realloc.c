#include "main.h"
#include <stdlib.h>

/**
 * _realloc -  creates an array of integers.
 * @ptr: pointer to old mem
 * @old_size: old size
 * @new_size: new size
 * Return: ptr to new mem
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *a;
	size_t i, max = new_size;
	char *olda = ptr;

	if (ptr == NULL)
	{
		a = malloc(new_size);
			return (a);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	a = malloc(new_size);
		if (a == NULL)
			return (NULL);
	if (new_size > old_size)
		max = old_size;
	for (i = 0; i < max; i++)
		a[i] = olda[i];
	free(ptr);
	return (a);
}
