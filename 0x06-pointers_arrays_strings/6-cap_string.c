#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 *
 * @a: pointer to the string
 * Return: pointer to cap. string
 *
 */

char *cap_string(char *a)
{
	int c;

	c = 0;
	while (a[c] != '\0')
	{
		if (a[0] >= 97 && a[0] <= 122)
		{
			a[0] = a[0] - 32;
		}
		if (a[c] == ' ' || a[c] == '\t' || a[c] == '\n'
			|| a[c] == ',' || a[c] == ';' || a[c] == '.'
			|| a[c] == '.' || a[c] == '!' || a[c] == '?'
			|| a[c] == '"' || a[c] == '(' || a[c] == ')'
			|| a[c] == '{' || a[c] == '}')
		{
			if (a[c + 1] >= 97 && a[c + 1] <= 122)
			{
				a[c + 1] = a[c + 1] - 32;
			}
		}
		c++;
	}
	return (a);
}
