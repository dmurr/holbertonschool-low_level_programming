#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - finds length of string
 * @s: pointer to first character in a given string
 *
 * Return: length of any given string
 */
int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;
	return (count);
}


/**
 * _strcat - concatenates one string to the end of another
 * @dest: destination of where string will be appended
 * @src: string to be appended to destination
 *
 * Return: pointer to the resulting concatenating string
 */
char *_strcat(char *dest, char *src)
{
	int i, dest_len;

	dest_len = _strlen(dest);
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

/**
 * argstostr - allocate space in memory for strings
 * @ac: argument count
 * @av: argument value
 *
 * Return: pointer to string
 */
char *argstostr(int ac, char **av)
{
	char *newstr;
	int i, j, length;

	if (ac == 0 || av == NULL)
		return (NULL);

	length = 0;
	for (i = 0; i < ac; i++)
	{
		length += _strlen(av[i]);
	}
	length += ac;
	newstr = malloc(sizeof(char *) * length + 1);
	if (newstr == NULL)
		return (NULL);

	for (j = 0; j < ac; j++)
	{
		_strcat(newstr, av[j]);
		_strcat(newstr, "\n");
	}
	return (newstr);

}
