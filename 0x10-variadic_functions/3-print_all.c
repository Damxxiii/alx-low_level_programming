#include "variadic_functions.h"

/**
 * print_all - function that prints anything.
 * @format: types of arguments passed to the function
 *
 * Return: any argument from the format
 */
void print_all(const char * const format, ...)
{
	int i, check_stat; /* DECLARES VARIABLES */

	char *str;
	va_list spc;

	va_start(spc, format); /* INITIALIZES VAR ARGUMENTS */

	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'i':
				printf("%d", va_arg(spc, int));
				check_stat = 0; /* CHECKS CONDITION */
				break;
			case 'f':
				printf("%f", va_arg(spc, double));
				check_stat = 0;
				break;
			case 'c':
				printf("%c", va_arg(spc, int));
				check_stat = 0;
				break;
			case 's':
				str = va_arg(spc, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				check_stat = 1;
				break;
		}
		if (format[i + 1] != '\0' && check_stat == 0) /* IF NOT NULL */
			printf(", ");
		i++; /* ITERATE */
	}
	printf("\n");
	va_end(spc);
}
