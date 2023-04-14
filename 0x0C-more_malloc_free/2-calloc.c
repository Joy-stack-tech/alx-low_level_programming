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
	unsigned int n;

	if (nmemb == 0 || size == 0)
		return (NULL);
	i = malloc(nmemb * size);
	if (i == NULL)
		return (NULL);
	for (n = 0; n < (nmemb * size); n++)
			i[n] = 0;
	return (i);
}
