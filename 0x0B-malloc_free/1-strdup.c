#include "main.h"
#include <stdlib.h>

/**
 * _strdup -  returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: input
 * Return: ptr
 */

char *_strdup(char *str)
{
	unsigned int a, b;
	char *strout;

	if (str == NULL)
	{
		return (NULL);
	}
	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	strout = (char *)malloc(sizeof(char) * (a + 1));

	if (strout == NULL)
	{
		return (NULL);
	}
	for (b = 0; b <= a; b++)
	{
		strout[b] = str[b];
	}
	return (strout);
}
