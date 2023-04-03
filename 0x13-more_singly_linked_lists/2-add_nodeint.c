#include "lists.h"

/**
* add_nodeint - function adds a new node at the beginning of a listint_t list.
* @head: pointer to pointer of the first node of linked list
* @n: data to be stored in linked list
* Return: returns address of the new element, or NULL if it failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;

	ptr->next = *head;
	*head = ptr;

	return (*head);
}
