#include "main.h"

/**
 *  _puts - prints a string, followed by a new line, to stdout.
 *
 *  @str: the pointer to the string
 *
 *  Return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
