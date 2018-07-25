#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints name as is or uppercase depending on function call.
 * @name: string to be printed
 * @f: function used to print
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}
