#include "lists.h"
/**
 * list_len - func that returns the number of elements
 * @h: the pointer that points to the struct
 * Return: length  of the elemen
*/
size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
