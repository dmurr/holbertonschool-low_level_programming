#include "holberton.h"

/**
 * rev_string - reverses strings
 * @s: string to be revered
 *
 */
void rev_string(char *s)
{
	int i, j;
	char temp;

	j = _strlen(s) - 1;
	for (i = 0; i < _strlen(s) / 2; i++)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		j--;
	}
}

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;
	return (count);
}
