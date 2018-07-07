#include "holberton.h"

/**
 * cap_string - capitalizes the beginning letter of each word in a string
 * @str: string to be capitalized
 *
 * Return: new array with words whose first letter is capitalized
 */
char *cap_string(char *str)
{
	int i;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	for (i = 0; str[i] != '\0'; i++)
		if ((str[i] == ' ' ||
		    str[i] == '\t' ||
		    str[i] == '\n' ||
		    str[i] == ',' ||
		    str[i] == ';' ||
		    str[i] == '.' ||
		    str[i] == '!' ||
		    str[i] == '?' ||
		    str[i] == '"' ||
		    str[i] == '(' ||
		    str[i] == ')' ||
		    str[i] == '{' ||
		    str[i] == '}') &&
		    (str[i + 1] >= 'a' &&
		     str[i + 1] <= 'z'))
		{
			str[i + 1] -= 32;
		}
	return (str);
}
