#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: inputed value
 * @max: inputed value
 *
 * Return: pointer to new array
*/
int *array_range(int min, int max)
{
	int i, size;
	int *b;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	b = malloc(sizeof(int) * size);

	if (b == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		b[i] = min++;
	}
	return (b);
}
