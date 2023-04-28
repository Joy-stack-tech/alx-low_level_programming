#include "lists.h"
/**
 * free_list - func that frees a list
 * @head: the list used in the func
*/
void free_list(list_t *head)
{
	list_t *tmp;

	tmp = head;
	while (head != NULL)
	{
		tmp = tmp->next;
		free(tmp->str);
		free(tmp);
	}
}

