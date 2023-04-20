#include <stdio.h>
#include <varargs.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums all it's args
 * @n: 1st number.
 * @...:
 *
 * Return: the sum of the args.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i;
	unsigned int sum;

	if (n == 0)
		return (0);

	va_start(ap, n);
	for (i = n; i >= 0; va_arg(ap,int))
	{
		sum += i;
	}

	va_end(ap);

	return (i);
}
