#include "main.h"

/**
 * rev_string -  reverses a string.
 *
 * @s: pointer to string
 *
 * Return: void
 */


void rev_string(char *s)
{
	char *start = s;
	int c;

	while (s[c] != '\0')
		c++;

	char *end = s + c - 1;

	char tmp;

	while (end > start)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
