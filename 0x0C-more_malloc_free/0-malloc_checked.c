#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * malloc_checked - function that allocates memory
 * @b: the allocated memory
 *
 * Return: returns a pointer to the allocated memory
*/
void *malloc_checked(unsigned int b)
{
	void *j;

	j = malloc(b);
	if (j == NULL)
		exit(98);
	return (j);
}
