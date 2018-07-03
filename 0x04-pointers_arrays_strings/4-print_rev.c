#include "holberton.h"

/**
 * print_rev - displays the reverse of a string
 * @s: string to be reversed
 */
void print_rev(char *s)
{
	int i;

	for (i = _strlen(s) - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}


/**
 * _strlen - finds length of string
 * @s: pointer to first character in a given string
 *
 * Return: length of any given string
 */
int _strlen(char *s)
{
	int i;
	int count;

	count = 0;
	for (i = 0; s[i] != '\0'; i++)
		count++;
	return (count);
}
