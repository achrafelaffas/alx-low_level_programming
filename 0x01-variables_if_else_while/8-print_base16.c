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
	char ch = 'a';

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}

	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');

	return (0);
}
