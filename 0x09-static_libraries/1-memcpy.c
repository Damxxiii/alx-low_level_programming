#include "main.h"

/**
 * _memcpy - Write a function that copies memory area.
 * @dest: dsetination
 * @src: source
 * @n: number of byte
 * Return: memory with new byte
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int i = n;

	for (; a < i ; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
