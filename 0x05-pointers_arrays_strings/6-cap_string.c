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
		    (str[i + 1] >= 97 &&
		     str[i + 1] <= 122))
		{
			str[i + 1] -= 32;
		}
	return (str);
}
