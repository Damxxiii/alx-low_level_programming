#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the sum of all the multiples of 3 or 5 below 1024 (excluded)
 * followed by a new line.
 *
 * Return: always 0
 */

int main(void)
{
	int i, sum = 0;

	for (i = 1 ; i <= 10; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum = sum + 1;
	}
	printf("%d\n", sum);
	return (0);
}
