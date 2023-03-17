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
	char ch = 'a';
	char CH = 'A';

	while (ch <= 'z' && CH <= 'Z')
	{
		putchar(ch);
		putchar(CH);
		ch++;
		CH++;
	}

	putchar('\n');

	return (0);
}
