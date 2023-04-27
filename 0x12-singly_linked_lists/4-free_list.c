#include "lists.h"
/**
 * free_list - func that frees a list
 * @head: the list used in the func
*/
void free_list(list_t *head)
{
	list_t *grap;

	while (head != NULL)
	{
		grap = head;
		free(grap->str);
		free(grap);
		grap = grap->next;
	}
}

