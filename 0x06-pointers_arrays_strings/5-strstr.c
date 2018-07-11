#include "holberton.h"
#include "stdio.h"

/**
 * _strstr - finds the first occurrence of the substring
 * needle in the string haystack
 * @haystack: string to be searched for matching substring
 * @needle: substring match
 *
 * Return: pointer to substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k;

	for (i = 0; i <= (_strlen(haystack) - _strlen(needle)); i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = i, k = 0; haystack[j] == needle[k]; j++, k++)
				;

			if (needle[k] == '\0')
			{
				return (&haystack[i]);
			}
		}
	}
	return (NULL);
}

/**
 * _strlen - finds length of string
 * @s: pointer to first character in a given string
 *
 * Return: length of any given string
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
