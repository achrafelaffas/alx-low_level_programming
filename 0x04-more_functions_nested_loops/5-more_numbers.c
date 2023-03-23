#include "main.h"

/**
 * more_numbers - print 10 lines of numbers
 * from 0 to 14
 *
 * Return: void
 */

void more_numbers(void)
{
	int i, j;

	for (i = '0'; i < '10'; i++)
	{
		for (j = '0'; j<= '14'; j++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
