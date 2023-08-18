#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: number of times to print diagonal lines
 *
 * Return: 0
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		int a, b;

		for (a = 0; a < n; a++)
		{
			for (b = 0; b < a; b++)
				if (b == 1)
				{
					putchar('\\');
					putchar('\n');
				}
			putchar('\n');
		}
	}

}
