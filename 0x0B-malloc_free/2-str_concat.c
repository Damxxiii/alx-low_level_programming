#include "main.h"
#include <stdlib.h>

/**
 * str_concat -  concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: ptr to allocated string
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int leni, lenj, k, l;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	leni = 0;
	while (s1[leni] != '\0')
	{
		leni++;
	}
	lenj = 0;
	while (s2[lenj] != '\0')
	{
		lenj++;
	}
	ptr = malloc(sizeof(char) * (leni + lenj + 1));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (k = 0; k < leni; k++)
	{
		ptr[k] = s1[k];
	}
	for (l = 0; l < lenj; l++)
	{
		ptr[k] = s2[l];
		k++;
	}
	return (ptr);

}
