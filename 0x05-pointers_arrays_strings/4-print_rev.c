#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: string to be printed
 * Retuern: 0
 */

void print_rev(char *s)
{
	int i;
	int count = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	s--;
	for (i = count ; i > 0 ; i--)
	{
		putchar(*s);
		s--;
	}
	putchar('\n');
}
