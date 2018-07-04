#include "holberton.h"

/**
 * puts_half - prints half of str if even, if odd len - 1 then print
 * @str: string to display half of
 *
 */
void puts_half(char *str)
{
	int len, i, k;

	for (len = 0; str[len] != '\0'; len++)
		;

	if (len % 2 == 0)
	{
		for (i = len / 2; str[i] != '\0'; i++)
			_putchar(str[i]);
	}
	else
	{
		for (k = (len + 1) / 2; str[k] != '\0'; k++)
			_putchar(str[k]);
	}
	_putchar('\n');
}
