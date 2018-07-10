#include "holberton.h"

/**
 * _strchr - find character in a given string
 * @s: given string
 * @c: character to find
 *
 * Return: a pointer to the first occurrence of the character c in the string s
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == c)
		{
			return (&s[i]);
		}

	return (0);
}
