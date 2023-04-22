#include "lists.h"

/**
* reverse_listint - function reverses a listint_t linked lis
* @head: a pointer to pointer of the first node
*
* Return: returns a pointer to the first node of the reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *new = NULL, *old = NULL;

	while (*head)
	{
		new = (*head)->next;
		(*head)->next = old;
		old = *head;
		*head = new;
	}

	*head = old;
	return (*head);
}
