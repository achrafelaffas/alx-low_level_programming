#include "main.h"

/**
 * _strlen - returns the lenght of a string.
 *
 * @a: pointer to the string.
 *
 * Return: the lenght (int)
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
	}
	return len;
}
