#include "main.h"
#include <string.h>
/**
 * _strlen - string length
 * @s: string
 * Return: length of string
 */

int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen(s + 1));
	}
}
/**
 * compare_string - compare each string character
 * @s: string
 * @l: smallest iterator
 * @r: largest iterator
 * Return: int
 */

int compare_string(char *s, int l, int r)
{
	if (*s + l == (*s + r))
	{
		if (l == r || l == r + 1)
			return (1);
		return (0 + compare_string(s, l + 1, r - 1));
	}
	return (0);
}
/**
 * is_palindrome - if a string is a palindrome
 * @s: string
 * Return: 1 on success, otherwise 0
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compare_string(s, 0, strlen(s) - 1));
}
