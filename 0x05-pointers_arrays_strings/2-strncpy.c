#include "holberton.h"

/**
 * _strncpy - copy up to n bytes of src into buffer dest
 * @dest: a copy of up to n byters will be saved here
 * @src: up to n bytes of src will be stored in dest
 * @n: number of bytes of src to be copied
 *
 * Return: pointer to new dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
