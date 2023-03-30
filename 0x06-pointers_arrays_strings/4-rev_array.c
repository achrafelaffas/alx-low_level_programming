#include "main.h"

/**
 * reverse_array -  reverses the content of an array of integers
 *
 * @a: pointer to  the array
 * @n: the number of element
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int tmp, i;

	i = 0;

	n -= n;
	while (i < n)
	{
		tmp = a[i];
		a[i++] = a[n];
		a[n--] = tmp;
	}
}

