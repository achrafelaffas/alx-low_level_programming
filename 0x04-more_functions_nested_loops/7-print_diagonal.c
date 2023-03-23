#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 *
 * @n: number of times the character \ should be printed
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int r, numLINES;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (r = 1; row <= n; r++)
		{
			if (r > 1)
			{
				for (numLINES = 1; numLINES <= r - 1; numLINES++)
				{
					_putchar(' ');
				}
			}

			_putchar('\\');
			_putchar('\n');
		}
	}
}
