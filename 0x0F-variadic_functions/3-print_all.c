#include "stdarg.h"
#include <stdio.h>

/**
 * _strlen - finds length of string
 * @s: pointer to first character in a given string
 *
 * Return: length of any given string
 */
unsigned int _strlen(const char *s)
{
	int i;
	unsigned int count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;
	return (count);
}

/**
 * print_all - prints all arguments
 * @format: types of arguments
 *
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	int count = 0;
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
			count++;
		}
		if ((i < _strlen(format) - (count)) && (format[i] == 'c' ||
						       format[i] == 'i' ||
						       format[i] == 'f' ||
						       format[i] == 's'))
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(valist);
}
