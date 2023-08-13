#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the function
 *
 * Return: always 0
 */

int main(void)
{
	int n;
	int b;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	b = n % 10;

	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5", n, b);
	else if (n == 0)
		printf("Last digit of %d is %d and is 0", n, b);
	else if (n < 6 && n != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0", n, b);

	printf("\n");
	return (0);
}
