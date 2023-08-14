#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	char charType;
	int intType;
	long int longintType;
	long long int longlongintType;
	float floatType;

	printf("Size of a char: %ld byte(s)"\n, sizeof(char));
	printf("size of an int: %ld byte(s)"\n, sizeof(int));
	printf("size of a long int: %ld byte(s)"\n, sizeof(longint));
	printf("size of a long long int: %ld byte(s)"\n, sizeof(longlongint));
	printf("size of a float: %ld byte(s)"\n, sizeof(float));
	return (0);
}
