#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"
/**
 * is_digit - check string for non digit char
 * @s: str
 * Return: 1 on success, otherwise 0
 */

int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (i);
}

/**
 * _strlen - len of string
 * @s: str
 * Return: length of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * error - main errors
 */
void error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiply two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, len, i, carry, digit1, digit2, *result, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		error();
	len1 =  _strlen(s1);
	len2 =  _strlen(s2);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);
		if (!result)
			return (1);
	for (i = 0; i <= len1 + len2; i++)
		result[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len--)
	{
		digit1 = s1[len] - '0';
		carry = 0;
		for (len2 = len2 - 1; len2 >= 0; len2--)
		{
			digit2 = s2[len2] - '0';
		carry += result[len1 + len2 + 1] + (digit1 * digit2);
		result[len1 + len2 + 1] = carry % 10;
		carry /= 10;
	}
	if (carry > 0)
		result[len1 + len2 + 1] += carry;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (result[i])
			a = 1;
		if (a)
			putchar(result[i] + '0');
	}
	if (!a)
		putchar('0');
	putchar('\n');
	free(result);
		return (0);
}
