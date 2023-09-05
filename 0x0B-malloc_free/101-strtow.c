#include "main.h"
#include <stdlib.h>

/**
 * ch_free_grid - main
 * @grid: input
 * @height: input2
 */

void ch_free_grid(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid);
	}
}
/**
 * strtow - splits a string into words.
 * @str: string
 * Return: ptr
 */

char **strtow(char *str)
{
	char **aout;
	unsigned int a, height, i, j, al;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (a = height = 0; str[a] != '\0'; a++)
		if (str[a] != ' ' && (str[a + 1] == ' ' || str[a + 1] == '\0'))
			height++;
	aout = malloc(sizeof(char *) * (height + 1));
	if (aout == NULL)
	{
		free(aout);
		return (NULL);
	}
	for (i = al = 0; i < height; i++)
	{
		for (a = al; str[a] != '\0'; a++)
		{
			if (str[a] == ' ')
				al++;
			if (str[a] != ' ' && (str[a + 1] == ' ' || str[a + 1] == '\0'))
			{
				aout[i] = malloc((a - al + 2) * sizeof(char));
					if (aout[i] == NULL)
					{
						ch_free_grid(aout, i);
						return (NULL);
					}
				break;
			}
		}
		for (j = 0; al <= a; al++, j++)
			aout[i][j] = str[al];
	}
	aout[i] = NULL;
	return (aout);
}
