#include "main.h"
#include <stdlib.h>

/**
 * _strncpy -  copies a string.
 * @dest: dest
 * @src: source
 * @n: input
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j = 0 && src[j])
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;

	}
	return (dest);
}
