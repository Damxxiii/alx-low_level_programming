#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints buffer
 * @b: buffer
 * @size: size
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int t, u, v;

	t = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (t < size)
	{
		u = size - t < 10 ? size - t : 10;
		printf("%08x", t);
		for (v = 0; v < 10; v++)
		{
			if (v < u)
				printf("%02x", *(b + t + v));
			else
				printf("  ");
			if (v % 2)
			{
				printf(" ");
			}
		}
	}
}
