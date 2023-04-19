#include "function_pointers.h"
/**
 * array_iterator - function that executes a fuction given as
 * a paramemeter in each element of an array
 * @array: inputted arrray of int type
 * @size: size of the array
 * @action: serves as pointer to function
 *
 * Return: no value
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (array && action)
	{
		for (j = 0; j < size; j++)
			action(array[j]);
	}
}
