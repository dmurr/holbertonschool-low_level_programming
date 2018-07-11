#include "holberton.h"

/**
 * _strstr -
 * @haystack:
 * @needle:
 *
 * Return:
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;
	int k = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
		    for (j = i; haystack[j] == needle[k]; j++)
		    {
			    k++;
		    }
		    if (needle[k] == '\0')
			    return (&haystack[i]);

		}
	}
	return (0);
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

	for (i = 0; s[i] != '\0'; i++)
		count++;
	return (count);
}
