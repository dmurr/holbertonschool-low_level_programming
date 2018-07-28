#include "stdarg.h"
#include <stdio.h>

/**
 * print_all - prints all arguments
 * @format: types of arguments
 *
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	va_list valist;
	char *str;

	while (format == NULL)
	{
		printf("\n");
		return;
	}

	va_start(valist, format);
	while (format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(valist, int));
			break;
		case 'i':
			printf("%d", va_arg(valist, int));
			break;
		case 'f':
			printf("%f", va_arg(valist, double));
			break;
		case 's':
			str = va_arg(valist, char*);
			if (str)
				printf("%s", str);
			else
				printf("(nil)");
			break;
		default:
			i++;
			continue;
		}
		if (format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(valist);
}
