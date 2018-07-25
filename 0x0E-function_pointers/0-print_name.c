#include "function_pointers.h"

/**
 * print_name - prints name as is or uppercase depending on function call.
 * @name: string to be printed
 * @f: function used to print
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
