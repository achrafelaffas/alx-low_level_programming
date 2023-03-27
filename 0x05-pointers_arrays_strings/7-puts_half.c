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
	char *start = str;
	int length = 0;
	int half;

	while (*end != '\0')
	{
		end++;
		length++;
	}

	half = (length + 2) / 2;

	if (length % 2 != 0)
	{
		start += half - 1;
	}
	else
	{
		start += half;
	}

	while (*start != '\0')
	{
		_putchar(*start);
		start++;
	}

	_putchar('\n');
}

