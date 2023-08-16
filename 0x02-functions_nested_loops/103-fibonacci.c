#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * followed by a new line
 * Return: 0
 */

int main(void)
{
	int max = 4000000;
	int term1 = 1;
	int term2 = 2;
	int term3;
	int sum = 2;

	while (term3 <= max)
	{
		term3 = term1 + term2;
		if (term3 % 2 == 0)
			sum = sum + term3;
		term1 = term2;
		term2 = term3;
	}
	printf("%d\n", sum);
	return (0);
}
