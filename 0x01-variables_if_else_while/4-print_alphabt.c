#include <stdio.h>

/**
 * main - prints alphabets except q and e
 *
 * Return: always 0
 */
int main(void)
{
	char b;

	for (b = 'a'; b <= 'z'; b++)

		if (b != 'e' && b != 'q')

			putchar(b);

	putchar('\n');
	return (0);
}
