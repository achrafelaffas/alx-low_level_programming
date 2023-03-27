#include "main.h"

/**
 * puts_half -  prints half of a string, followed by a new line.
 *
 * @str: the pointer of the string
 *
 * Return: void
 */

void puts_half(char* str) {
	int length = strlen(str);
	int half = (length + 1) / 2;
	int i;

	for (i = half; i < length; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
