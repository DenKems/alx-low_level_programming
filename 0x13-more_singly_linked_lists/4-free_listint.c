#include "lists.h"

/**
* free_listint - function  frees a listint_t list
* @head: pointer to pointer of the first node
* Return: nothing
*/
void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		free(head->next);
	}

	free(head);
}
