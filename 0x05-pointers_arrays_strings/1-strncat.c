#include "holberton.h"

/**
 * _strncat - appends up n bytes of src to dest
 * @src: content to be appended
 * @dest: where content will be apended
 * @n: number of bytes of src to be appended
 *
 * Return: updated dest with appended src
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, dest_len;

	dest_len = _strlen(dest);

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}

/**
 * _strlen - finds length of string
 * @s: string
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
