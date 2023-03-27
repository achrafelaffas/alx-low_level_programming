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
	char *end = s;

	while (*end != '\0')
	{
		end++;
	}
	end--;

	while (end > start)
	{
		char temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
