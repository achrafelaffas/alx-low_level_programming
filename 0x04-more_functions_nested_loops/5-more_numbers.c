#include "main.h"

/**
 * more_numbers - print 10 lines of numbers
 * from 0 to 14
 *
 * Return: void
 */

void more_numbers(void)
{
	int n, t, u, r;

	for (r = 1; r <= 10; r++)
	{
		for (n = 0; n <= 14; n++)
		{
			t = n / 10;
			u = n % 10;
			if (n > 9)
				_putchar(t + '0');
			_putchar(u + '0');
		}
		_putchar('\n');
	}
}
