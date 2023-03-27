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
	char *end;
	char temp;
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	end = s + len - 1;
	while (end > start)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
