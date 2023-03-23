#include "main.h"

/**
 * _isdigit - checks for digits
 *
 * @c: contains the value needed to be checked
 *
 * Return: 1 if digit, 0 if not
 */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	return (0);
}
