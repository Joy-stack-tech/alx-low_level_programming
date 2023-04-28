#include "lists.h"
#include <string.h>
/**
 * add_node - func that adds new node at a list beginning
 * @str: string present in the list
 * @head: points to the struct
 * Return: address of new element
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_add;
	int j;

	j = 0;
	new_add = malloc(sizeof(list_t));
	if (new_add == NULL)
	{
		free(new_add);
		return (NULL);
	}
	new_add->str = strdup(str);
	while (str[j] != '\0')
	{
		j++;
	}
	new_add->len = j;
	if (*head != NULL)
		new_add->next = *head;
	if (*head == NULL)
		new_add->next = NULL;
	(*head) = new_add;
	return (*head);
}
