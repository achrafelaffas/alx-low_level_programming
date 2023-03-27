#include "main.h"

/**
 * print_rev - print a string in reverse.
 *
 * @s: pointer to string
 *
 * Return: void
 */

void print_rev(char *s)
{
	char *end = s;

	while (*end != '\0')
		end++;

	end--;

	while (end >= s)
	{
		_putchar(*end);
		end--;
	}

	_putchar('\n');
}
