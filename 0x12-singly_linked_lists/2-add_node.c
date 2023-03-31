#include "lists.h"
#include <string.h>

/**
* add_node - function adds a new node at the beginning of a list_t list
* @head: pointer to the head pointer of the first node
* @str: elements or string to be entered into new node
* Return: returns address of the new element, or NULL if it failed
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
		return (NULL);

	ptr->str = strdup(str);
	ptr->len = strlen(str);
	ptr->next = NULL;

	ptr->next = *head;
	*head = ptr;

	return (*head);
}
