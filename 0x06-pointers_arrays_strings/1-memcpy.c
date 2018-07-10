#include "holberton.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest.
 * @dest: where n bytes of src will be pasted
 * @src: where copy is coming from
 * @n: number of bytes to be copies
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
