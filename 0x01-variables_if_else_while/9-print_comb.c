#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */


/**
 * main - Entry point
 * Description: if-else program.
 * Return: (0) always - Success.
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
