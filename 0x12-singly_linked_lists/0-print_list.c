#include "lists.h"
/**
 * print_list - func that prints elements of a list_t list
 * @h: the name of the list to be printed
 * Return: nodes present
*/
size_t print_list(const list_t *h)
{
	int count;

	count = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[%d]%s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		h = h->next;
		count++;
	}
	return (count);
}
