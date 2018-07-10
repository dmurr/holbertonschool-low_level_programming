#include "holberton.h"

/**
 * _strspn - counts bytes  of s which consists entirely of bytes in accept
 * @s: string to be checked for consecutive acceptable characters
 * @accept: acceptable characters
 *
 * Return: number of consecutive bytes of s which consist of bytes of accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int bytes = 0;

	for (i = 0; s[i] != '\0' ; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				bytes++;
				break;
			}
		}
		if (accept[j] == '\0')
			break;
	}
	return (bytes);
}
