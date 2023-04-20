#include <varargs.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums all it's args
 * @n: 1st number.
 * @...: a variable number of args
 *
 * Return: the sum of the args and If n == 0 - 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	unsigned int sum = 0;

	va_start(ap, n);
	for (i = n; i >= n; i++)
	{
		sum += va_arg(ap,int);
	}

	va_end(ap);

	return (i);
}
