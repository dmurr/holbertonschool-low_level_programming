#include "holberton.h"

/**
 * _strlen_recursive - find length of string
 * @s: string
 *
 * Return: length
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
