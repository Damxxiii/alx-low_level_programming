#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _atoi - convert a string to an integer
 * @s: pointer to convert
 * Return: an integer
 */

int _atoi(char *s)
{
	int i, j, len, n, d, e;

	i = 0;
	j = 0;
	len = 0;
	n = 0;
	d = 0;
	e = 0;

	while (s[len] != '\0')
		len++;
	while (i < len && n == 0)
	{
		if (s[i] == '-')
			++j;
		if (s[i] > '0' && s[i] <= '9')
		{
			d = s[i] - '0';
			if (j % 2)
				d = -d;
			e = e * 10 + d;
			n = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			n = 0;
		}
		i++;
	}
	if (n == 0)
		return (0);
	return (e);

}
