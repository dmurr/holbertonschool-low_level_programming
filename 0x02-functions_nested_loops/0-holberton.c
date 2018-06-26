#include "holberton.h"

/**
 * main - include custom header file and _putchar function
 *
 * Return: 0 if successful
 */

int main(void)
{
	char str[] = "Holberton";
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return (0);
}
