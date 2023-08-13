#include <stdio.h>

/**
 * main - prints diff combinations of two digits
 *
 *i Return: always 0
 */
int main(void)
{
	int a, b;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			if (a < b)
			{

				putchar(a);
				putchar(b);

	if (a != '8' || (a == '8' && b != '9'))
	{

		putchar(',');
		putchar(' ');
	}
			}
		}
	}

	putchar('\n');

	return (0);
}
