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

	srand(time(0));
	n = rand() - RAND_MAX / 2;


	if (n > 5)
		printf("Last digit of %d  and is greater than 5", n);
	else if (n == 0)
		printf("Last digit of %d  and is 0", n);
	else if (n < 6 && n != 0)
		printf("Last digit of %d  and is less than 6 and not 0", n);

	printf("\n");
	return (0);
}
