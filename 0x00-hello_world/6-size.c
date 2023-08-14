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

	printf("Size of a char: %ld byte(s)", sizeof(char));
	printf("size of an int: %ld byte(s)", sizeof(int));
	printf("size of a long int: %ld byte(s)", sizeof(longint));
	printf("size of a long long int: %ld byte(s)", sizeof(longlongint));
	printf("size of a float: %ld byte(s)", sizeof(float));
	printf("\n");
	return (0);
}
