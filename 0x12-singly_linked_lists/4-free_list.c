#include "lists.h"
/**
 * free_list - func that frees a list
 * @head: the list used in the func
*/
void free_list(list_t *head)
{
	list_t *gap;

	gap = head;
	while (head)
	{
		free(gap->str);
		free(gap);
		gap = gap->next;
	}
}

