#include "function_pointers.h"
/**
 * int_index - function that searches for an int
 * @size: number of elements in the array
 * @array: set of variables
 * @cmp: pointer to the function
 *
 * Return: index of the first element and -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
	}
		for (j = 0; j < size; j++)
		{
			if (cmp(array[j]))
				return (j);
		}
		return (-1);
}
