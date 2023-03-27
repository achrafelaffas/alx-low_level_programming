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
	char* start = s;
	char* end = s + 10 - 1;
	char temp;

	while (end > start)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
