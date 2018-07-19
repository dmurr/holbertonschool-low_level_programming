#include "holberton.h"
#include <stdlib.h>

/**
 * _strlen - finds length of string
 * @s: pointer to first character in a given string
 *
 * Return: length of any given string
 */
unsigned int _strlen(char *s)
{
	unsigned int i;
	unsigned int count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;
	return (count);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: number of bytes to copy from s2
 *
 * Return: pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *nstr;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n > _strlen(s2))
		n = _strlen(s2);

	nstr = malloc(sizeof(char) * _strlen(s1) + n + 1);
	if (nstr == NULL)
		return (NULL);

	for (i = 0; i < _strlen(s1); i++)
	{
		*(nstr + i) = *(s1 + i);
	}
	for (j = 0; j < n; j++)
	{
		*(nstr + i) = *(s2 + j);
		i++;
	}
	*(nstr + i) = '\0';

	return (nstr);
}
