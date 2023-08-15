#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: success 1.
 * on error, -1 is returned, and error set.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
