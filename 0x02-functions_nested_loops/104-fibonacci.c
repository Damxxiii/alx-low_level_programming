#include <stdio.h>

/**
 * main -  prints the first 50 Fibonacci numbers
 * starting with 1 and 2, followed by a new line.
 * Return: 0
 */

int main(void)
{
	unsigned long int pass1 = 1;
	unsigned long int pass2 = 2;
	unsigned long int pass3;
	int i;

	printf("%lu, ", pass1);
	for (i = 1 ; i < 50 ; i++)
	{
		printf("%lu", pass2);
		pass3 = pass1 + pass2;
		pass1 = pass2;
		pass2 = pass3;
		if (i != 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}
