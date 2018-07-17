#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - finds length of string
 * @s: input string
 *
 * Return: length of string
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
 * *_strcpy - copies a src string into a dest string
 * @dest: where the string is being pasted
 * @src: initial string to be copied
 *
 * Return: updated destination
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}


/**
 * str_concat -
 * @s1:
 * @s2:
 *
 * Return:
 */
char *str_concat(char *s1, char *s2)
{
	char *newstr;
	int len1 = _strlen(s1);
	int len2 = _strlen(s2);
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	newstr = malloc(sizeof(char) * (len1 + len2) + 1);

	if (newstr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
                newstr[i] = s1[i];

	for (j = 0; s2[j] != '\0'; j++)
	{
		newstr[i] = s2[j];
		i++;
	}
	return (newstr);
}
