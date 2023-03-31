#include "lists.h"
#include <string.h>

/**
* add_node_end - function adds a new node at the end of a list_t list.
* @head: pointer to the first node in the linked list
* @str: string to be entered into the new node
* Return: returns address of the new element, or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr = *head;
	list_t *temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);
	temp->len = strlen(str);
	temp->next = NULL;

	if (*head == NULL)
		return (temp);

	while (ptr != NULL)
		ptr = ptr->next;

	ptr = temp;

	return (ptr);
}

