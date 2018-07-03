#include "holberton.h"

/**
 * puts2 - puts every other character in a given string
 * @str: given string
 *
 */
void puts2(char *str)
{
	int i;

	for (i = 0; i <= _strlen(str) - 1; i += 2)
		_putchar(str[i]);
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
