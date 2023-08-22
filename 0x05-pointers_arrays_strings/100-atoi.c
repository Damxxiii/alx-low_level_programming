#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: pointer to convert
 * Return: an integer
 */

int _atoi(char *s)
{
	int i = 0;
	unsigned int u = 0;
	int min = 1;
	int j = 0;

	while (s[c])
	{
		if (s[i] == 45)
		{
			min *= -1;
		}

		while (s[i] >= 48 && s[i] <= 57)
		{
			j = 1;
			u = (u * 10) + (s[i] - '0');
			c++;
		}

		if (j == 1)
		{
			break;
		}

		i++;
	}
	u *= min;
	return (u);
}
