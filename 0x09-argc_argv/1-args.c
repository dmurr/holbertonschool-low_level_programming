#include "holberton.h"
#include <stdio.h>

/**
 * main - prints argument count
 * @argc: argument count
 * @argv: argument values
 *
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
