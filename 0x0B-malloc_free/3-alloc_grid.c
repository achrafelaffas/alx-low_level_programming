#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of
 *               integers with each element initalized to 0.
 * @width: The width of the 2-dimensional array.
 * @height: The height of the 2-dimensional array.
 *
 * Return: If width <= 0, height <= 0, or the function fails - NULL.
 *         Otherwise - a pointer to the 2-dimensional array of integers.
 */

int **alloc_grid(int width, int height)
{
	int **_2d_array;
	int w_ndx, h_ndx;

	if (width <= 0 || height <= 0)
		return (NULL);

	_2d_array = malloc(sizeof(int *) * height);

	if (_2d_array == NULL)
		return (NULL);

	for (h_ndx = 0; h_ndx < height; h_ndx++)
	{
		_2d_array[h_ndx] = malloc(sizeof(int) * width);

		if (_2d_array[h_ndx] == NULL)
		{
			for (; h_ndx >= 0; h_ndx--)
				free(_2d_array[h_ndx]);

			free(_2d_array);
			return (NULL);
		}
	}

	for (h_ndx = 0; h_ndx < height; h_ndx++)
	{
		for (w_ndx = 0; w_ndx < width; w_ndx++)
			_2d_array[h_ndx][w_ndx] = 0;
	}

	return (_2d_array);
}
