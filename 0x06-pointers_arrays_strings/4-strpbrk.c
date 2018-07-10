#include "holberton.h"

/**
 * _strbrk - find first occurence of accept in string
 * @s: string being searched
 * @accept: what is being searched for
 *
 * Return: pointer to the first byte in s that matched any byte in accept
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}
	return (0);
}
