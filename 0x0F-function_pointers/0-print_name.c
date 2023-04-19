#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - a function that prints a name
 *
 * @name: pointer to a char
 * @f: pointer to function and char in its's param.
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		exit(EXIT_FAILURE);
	f(name);
}
