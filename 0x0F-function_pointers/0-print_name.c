#include "function_pointers.h"
/**
 * print_name -  function that prints a name.
 *
 * @f: string name variable
 * @name: name to be printed
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
