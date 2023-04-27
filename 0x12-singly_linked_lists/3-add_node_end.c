#include "lists.h"
#include <string.h>
/**
 * add_node_end - func that adds a new node at a list end
 * @str: the usring used for storage
 * @head: node at the begginning of list
 * Return: the memory address of the head
*/
list_t *add_node_end(list_t **head, const char *str)
{
	size_t tcar;
	list_t *new_node, *temp_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (tcar = 0; str[tcar]; tcar++)
		;

	new_node->len = tcar;
	new_node->next = NULL;
	temp_node = *head;

	if (temp_node  == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (temp_node->next == NULL)
			temp_node = temp_node->next;
		temp_node->next = new_node;
	}
	return (*head);
}
