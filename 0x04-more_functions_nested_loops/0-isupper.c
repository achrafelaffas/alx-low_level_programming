#include "main.h"

/**
 * _isupper - checks for an uppercase letter
 * @c: the letter to check
 * Return: 1 if c is an uppercase letter 0 if not
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
