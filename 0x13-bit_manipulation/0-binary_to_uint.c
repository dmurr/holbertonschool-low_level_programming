#include "holberton.h"

/**
 * binary_to_uint - converts binary string to int
 * @b: string
 *
 * Return: int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		num *= 2;
		if (b[i] == '1')
			num += 1;
	}
	return (num);
}