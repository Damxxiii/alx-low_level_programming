#include "main.h"
#include <stdio.h>

/**
 * print_line - draws a straight line in the terminal.
 * @n: number of lines to draw
 *
 * Return: void
 */

void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			putchar(95);
		}
		putchar('\n');
	}
}
