#include "main.h"

/**
  * jack_bauer- prints every minute of the day
  *
  * Return: void
  */

void jack_bauer(void)
{
	int i, j;

	for (i = 0; i <= 23; i++)
	{
		_putchar(i);
		_putchar(i);
		for(j = 0; j <= 59; j++)
		{
			_putchar(58);
			_putchar(j);
			_putchar(j);
		}
	}
}
