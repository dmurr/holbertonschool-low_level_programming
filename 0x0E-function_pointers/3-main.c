#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
#include <string.h>

/**
 * main - performs various opertation on arguments passed at runtime
 * @argc: arguments count
 * @argv: argument values
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if ((strcmp(argv[2], "+") != 0) &&
	    (strcmp(argv[2], "-") != 0) &&
	    (strcmp(argv[2], "*") != 0) &&
	    (strcmp(argv[2], "/") != 0) &&
	    (strcmp(argv[2], "%") != 0))
	{
		printf("Error\n");
		exit(99);
	}

	if ((strcmp(argv[2], "/") == 0 && *argv[3] == '0') ||
	    (strcmp(argv[2], "%") == 0 && strcmp(argv[3],"0")))
	{
		printf("Error\n");
		exit(100);
	}
	result = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));

	printf("%d\n", result);

	return (0);
}
