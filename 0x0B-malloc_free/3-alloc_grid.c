#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2dimensional array of int
 * @width: input
 * @height: input
 *
 * Return: 0
*/
int **alloc_grid(int width, int height)
{
	int **array, j, k;
	int len = width * height;

	if (len <= 0)
	{
		return (NULL);
	}
	array = (int **)malloc(sizeof(int *) * height);
	if (array == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < height; j++)
	{
		array[j] = (int *)malloc(sizeof(int) * width);
		if (array[j] == NULL)
		{
			for (j--; j >= 0; j--)
				free(array[j]);
			free(array);
			return (NULL);
		}
	}

	for (j = 0; j < height; j++)
		for (k = 0; k < width; k++)
			array[j][k] = 0;
	return (array);
}
