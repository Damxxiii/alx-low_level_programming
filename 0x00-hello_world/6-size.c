#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	char b;
	int c;
	long int d;
	long long int e;
	float f;

	printf("Size of a char: %ld byte(s)"\n, sizeof(b));
	printf("size of an int: %ld byte(s)"\n, sizeof(c));
	printf("size of a long int: %ld byte(s)"\n, sizeof(d));
	printf("size of a long long int: %ld byte(s)"\n, sizeof(e));
	printf("size of a float: %ld byte(s)"\n, sizeof(f));
	return (0);
}
