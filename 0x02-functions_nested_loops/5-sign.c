#include "main.h"
/**
  * print_sign- Checks for sign of the given number
  * @n: The number to be checked
  *
  * Return: 1 for + number, -1 for - number and 0 for 0
  */

int print_sign(int n)
{
	if (n < 0)
		return (-1);
	if (n > 0)
		return (1);
	return (0);
}
