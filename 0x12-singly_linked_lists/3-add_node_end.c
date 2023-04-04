#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node_end - adds a new node to the end of the last node
* @head: head of the lists
* @str: string to add to the new node
*
* Return: pointer to the new node
*/

list_t *add_node_end(list_t **head, const char *str)
{
	int len = 0;
	list_t *new, *tmp;
	tmp = *head;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;

	return (new);
}
