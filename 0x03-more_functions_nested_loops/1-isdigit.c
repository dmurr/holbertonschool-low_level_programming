#include "hoblerton.h"

/**
 * _isdigit - checks input to see if it is a number
 * @c: input to be checked
 *
 * Return: 1 if number, 2 otherwise
 */
int _isdigit(int c)
{
	if (c >= 47 && c <= 57)
		return (1);
	else
		return (0);
}
