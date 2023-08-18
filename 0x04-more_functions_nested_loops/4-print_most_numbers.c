#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - prints the numbers, from 0 to 9
 * followed by a new line.
 * Return: void
 */

void print_most_numbers(void)
{
	int c = 0;

	for (; c <= 9 ; c++)
	{
		if (c != 2 && c != 4)
			putchar(c + '0');
	}
	putchar('\n');
}
