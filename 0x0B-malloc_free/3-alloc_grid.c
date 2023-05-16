#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to 2-dimensional array
 * each element initialized to 0
 * @width: the width of two dimensional
 * @height: the height of two dimensional
 * Return: if width <= 0, height <= 0,
 * or the function fails - is NULL
 * otherwise: a pointer to the 2-dimensional array of int
 */

int **alloc_grid(int width, int height)
{
	int h, w;
	int **array;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	array = malloc(sizeof(int *) * height);

	if (array == NULL)
	{
		return (NULL);
	}
	for (h = 0; h < height; h++)
	{
		array[h] = malloc(sizeof(int) * width);
		if (array[h] == NULL)
		{
			for (w = h; w >= 0; w--)
				free(array[w]);

						free(array);
						return (NULL);
						}
						}
						for (h = 0; h < height; h++)
						{
							for (w = 0; w < width; w++)
						array[h][w] = 0;
						}
						return (array);
						}
