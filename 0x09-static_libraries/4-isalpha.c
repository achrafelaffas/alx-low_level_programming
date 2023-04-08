#include "main.h"

/**
  * _isalpha - Checks for alphabetic character
  * @c: The character to be checked
  *
  * Return: 1 for alphabetic character or 0 for anything else
  */

int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
		return (1);
	return (0);
}
