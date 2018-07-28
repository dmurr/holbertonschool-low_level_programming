#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - finds sum of arguments
 * @n: number of arguments being passed
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	unsigned int sum = 0;

	if (n == 0)
		return (n);

	va_start(valist, n);
	for (i = 0; i < n; i++)
		sum += va_arg(valist, int);

	return (sum);
}
