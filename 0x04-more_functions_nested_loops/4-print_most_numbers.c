#include "main.h"

/**
 * print_most_numbers -  prints the numbers
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
	{
		if (number =! '2' || number =! '4')
			_putchar(number);
	}
	_putchar('\n');
}
