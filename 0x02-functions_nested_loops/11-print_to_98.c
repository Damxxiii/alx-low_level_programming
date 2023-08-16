#include <stdio.h>
#include "main.h"

/**
 * print_to_98 -  prints all natural numbers from n to 98
 * followed by a new line.
 * @n: print from this number
 * Return: always 0
 */

void print_to_98(int n)
{

	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n == 98)
			{
				printf("%d", n);
				printf("\n");
				break;
			}
			else if (n != 98)
			{
				printf("%d, ", n);
			}
				for (; n <= 98; n--)
				{
					if (n == 98)
					{
						printf("%d", n);
						printf("\n");
						break;
					}
				}
			}
		}
}
