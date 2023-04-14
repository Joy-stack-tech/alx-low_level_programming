#include "main.h"
#include <stdlib.h>
/**
 * _calloc -allocates memory for @nmemb
 * @nmemb: allocate memory for an array
 * @size: allocates elements of size bytes
 *
 * Return: pointer to the allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *i;
	unsigned int p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	i = malloc(nmemb * size);
	if (i == NULL)
		return (NULL);
	for (p = 0; p < (nmemb * size); p++)
		i[p] = 0;
	return (i);
}
