#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the char c to stdout
 * @c: char to print
 * Return: 0 on success otherwise -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
