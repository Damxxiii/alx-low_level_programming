#include "main.h"

/**
 * _memset - Write a function that fills memory with a constant byte.
 * @s: address of memory to be filled
 * @b: value
 * @n: number of bytes to be changed
 * Return: array with new value
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0 ; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
