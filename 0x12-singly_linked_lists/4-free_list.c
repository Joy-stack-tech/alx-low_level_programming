#include "lists.h"
/**
 * free_list - func that frees a list
 * @head: the list used in the func
*/
void free_list(list_t *head)
{
	list_t *gap;

	gap = head;
	while (head != NULL)
	{
		list_t *tmp = gap;

		gap = gap->next;
		free(tmp);
	}
}

