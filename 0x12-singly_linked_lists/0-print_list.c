#include "lists.h"
/**
 * print_list - func that prints elements of a list_t list
 * @h: the name of the list to be printed
 * Return: nodes present
*/
size_t print_list(const list_t *h)
{
	int jam;

	jam = 0;
	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%d]%s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		jam++;
		h = h->next;
	}
	return (jam);
}
