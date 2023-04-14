#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates memory block with the use of malloc and free
 * @ptr: pointer to already allocated memory
 * @old_size: the size in byte fdor the allocated memory ptr
 * @new_size: the new size in byte for the new allocated memory
 *
 * Return: ptr allocates new size memory or null
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *i;
	unsigned int j, n = new_size;
	char *oldi = ptr;

	if (ptr == NULL)
	{
		i = malloc(new_size);
		return (i);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	i = malloc(new_size);
	if (i == NULL)
		return (NULL);
	if (new_size > old_size)
		n = old_size;
	for (j = 0; j < n; j++)
		i[j] = oldi[j];
	free(ptr);
	return (i);
}
