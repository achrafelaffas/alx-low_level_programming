#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: pointer to string
 *
 * Return: pointer to an encoded string
 */

char *leet(char *str)
{
	char *ptr = str;
	char c;

	while (*ptr != '\0')
	{
		if ((*ptr >= 'a' && *ptr <= 'z') || (*ptr >= 'A' && *ptr <= 'Z'))
		{
			c = (*ptr >= 'a' && *ptr <= 'z') ? (*ptr - 'a' + 'A') : *ptr;
			if (c == 'A' || c == 'a')
			{
				*ptr = '4';
			}
			else if (c == 'E' || c == 'e')
			{
				*ptr = '3';
			}
			else if (c == 'O' || c == 'o')
			{
				*ptr = '0';
			}
			else if (c == 'T' || c == 't')
			{
				*ptr = '7';
			}
			else if (c == 'L' || c == 'l')
			{
				*ptr = '1';
			}
			else
			{
			}
		}
		ptr++;
	}
	return (str);
}
