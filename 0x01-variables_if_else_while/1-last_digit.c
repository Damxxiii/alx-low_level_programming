#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - this is a function
 *
 * Return: always 0
 */
int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;

	if (n > 5)
		printf("Last digit of %d is %d and is graeter than 5", n, x);
	else if (n == 0)
		printf("Last digit of %d is %d is 0", n, x);
	else if (n < 6 && n != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0", n, x);

	printf("\n");
	return (0);

}
