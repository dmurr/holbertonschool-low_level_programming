#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - find length of string
 * @s: string to find length of
 *
 * Return: length
 */
int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;
	return (count);
}

/**
 * _strdup - makes copy of string parameter in memory
 * @str: string to copy
 *
 * Return: pointer to copy string
 */
char *_strdup(char *str)
{
	char *s;
	int i;


	if (str == NULL)
		return (NULL);

	s = malloc(sizeof(char) * _strlen(str) + 1);

	if (s == NULL)
		return (NULL);

	for (i = 0; i <= _strlen(str); i++)
		s[i] = str[i];

	return (s);
}
