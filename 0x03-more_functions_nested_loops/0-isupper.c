#include "holberton.h"

/**
 * _isupper - checks if c is uppercase
 * @c: character to be checked
 *
 * Return: returns 1 if true, 2 if false
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
