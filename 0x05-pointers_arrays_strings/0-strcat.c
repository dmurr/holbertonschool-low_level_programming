#include "holberton.h"

/**
 * _strcat - concatenates one string to the end of another
 * @dest: destination of where string will be appended
 * @src: string to be appended to destination
 *
 * Return: pointer to the resulting concatenating string
 */
char *_strcat(char *dest, char *src)
{
	int i, dest_len;

	dest_len = _strlen(dest);
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

/**
 * _strlen - finds length of string
 * @s: input string
 *
 * Return: length of string
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
