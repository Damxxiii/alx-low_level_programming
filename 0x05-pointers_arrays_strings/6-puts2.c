#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character of a string
 * @str: string to be printed
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;
	int j = 0;
	char *b = str;
	int k;

	while (*b != '\0')
	{
		b++;
		i++;
	}
	j = i - 1;

	for (k = 0 ; k <= j ; k++)
	{
		if (k % 2 == 0)
		{
			putchar(str[k]);
		}
	}
	putchar('\n');
}
