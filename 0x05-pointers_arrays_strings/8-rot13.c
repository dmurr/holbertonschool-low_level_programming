#include "holberton.h"

/**
 * rot13 - converts string to rot13 and back
 * @str: string to be converted
 *
 * Return: updated string
 */
char *rot13(char *str)
{
	int i, j;
	char rot1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; rot1[j] != '\0'; j++)
		{
			if (str[i] == rot1[j])
			{
				str[i] = rot2[j];
				break;
			}
		}
	}
	return (str);
}
