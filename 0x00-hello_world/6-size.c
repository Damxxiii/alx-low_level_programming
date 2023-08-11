#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	printf("Size of a char: %c byte(s)", sizeof(char));
	printf("size of int: %c byte(s)", sizeof(int));
	printf("size of a long int: %c byte(s)", sizeof(long int));
	printf("size of a long long int: %ld byte(s)", sizeof(long long int));
	printf("size of a float: %ld byte(s)", sizeof(float));
	return (0);
}
