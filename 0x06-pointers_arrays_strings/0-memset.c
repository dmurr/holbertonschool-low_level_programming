#include "holberton.h"

/**
 * _memset - fills the first n bytes of the memory area pointed to by s
 * with the constant byte b
 * @s: string to be updated with b
 * @b: constant to change string with
 * @n: number of bytes of b to change s with
 *
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
