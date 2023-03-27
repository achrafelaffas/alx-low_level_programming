#include "main.h"

/**
 * puts_half -  prints half of a string, followed by a new line.
 *
 * @str: the pointer of the string
 *
 * Return: void
 */

void puts_half(char *str)
{
	char *end = str;
	int i;

	while (*end != '\0')
	{
		end++;
	}

	for (i = 0; i < end / 2; i++)
	{
		_putchar(*str);
	}

	_putchar('\n');
}
