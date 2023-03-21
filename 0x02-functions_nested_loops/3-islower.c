#include "main.h"
/**
  * isSlower - Is the char in lowercase
  *
  * Return: 1 (sucess)
  * Return: 0 (failure)
  */

int _islower(int c)
{
	if (96 < c && c < 123)
		return (1);
	else
		return (0);
}
