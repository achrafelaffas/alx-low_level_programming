#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array.
 *
 * @array: pointer to the array
 * @action: pointer to the funtion to apply on the array
 * that takes an int as a parameter.
 * @size: the size of the array
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || size == 0 || action == NULL)
		exit(EXIT_FAILURE);

	for (i =  0; i < size; i++)
	{
		action(array[i]);
	}
}
