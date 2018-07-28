#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - prints string arguments
 * @separator: separates arguments when printed
 * @n: number of arguments
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	if (n)
	{
		va_start(valist, n);
		for (i = 0; i < n; i++)
		{
			char *str = va_arg(valist, char*);

			if (str)
				printf("%s", str);
			else
				printf("(nil)");
			if (separator && i < n - 1)
				printf("%s", separator);
		}
		printf("\n");
		va_end(valist);
	}
}
