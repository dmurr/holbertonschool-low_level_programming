#include "holberton.h"

/**
 * _strcmp - compares to strings to each other
 * @s1: string one to be compared
 * @s2: string two to be compared
 *
 * Return: an integer less than, equal to, or greater than
 * s1 if (or the first n bytes thereof) are found
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i]; i++)
	{
		if (s1[i] == '\0')
			return (0);
	}
	return (s1[i] - s2[i]);
}
