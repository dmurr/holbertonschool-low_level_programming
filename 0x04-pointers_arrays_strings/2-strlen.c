#include "holberton.h"

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

	for (i = 0; s[i] > 0; i++)
		count++;
	return (count);
}
