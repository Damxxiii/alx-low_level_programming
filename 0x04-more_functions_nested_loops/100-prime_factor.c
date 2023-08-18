#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * main - prime factor
 *
 * Return: 0
 */

int main(void)
{
	long int n;
	long int max;
	long int i;

	n = 612852475143;
	max = -1;
	if (n % 2 == 0)
	{
		max = 2;
		n = n / 2;
	}

	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		if (n % i == 0)
		{
			max = i;
			n = n / 2;
		}
	}
	if (n > 2)
		max = n;

	printf("%ld\n", max);
	return (0);
}

