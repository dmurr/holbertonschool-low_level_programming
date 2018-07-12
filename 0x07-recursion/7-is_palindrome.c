#include "holberton.h"

/**
 * is_palindrome - checks if string reverser is equal to initial string
 * @s: string to check
 * @first: first index
 * @last: last index
 * Return: 1 if is palindrome, 0 if is not
 */
int helper(int first, int last, char *s);
int _strlen_recursion(char *s);

int is_palindrome(char *s)
{

	return (helper(0, _strlen_recursion(s) - 1, s));
}

/**
 * helper - checks if string is palindrome
 * @first: first index
 * @last: last index
 * @s: string
 *
 * Return: 1 if is palindrome, 2 if not
 */
int helper(int first, int last, char *s)
{
	if (first >= last)
		return (1);
	if (s[first] != s[last])
		return (0);
	else
		return (helper(first + 1, last - 1, s));
}

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
