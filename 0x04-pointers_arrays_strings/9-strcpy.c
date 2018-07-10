#include "holberton.h"

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
