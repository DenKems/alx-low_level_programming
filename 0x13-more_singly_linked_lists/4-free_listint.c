#include "lists.h"

/**
* free_listint - function  frees a listint_t list
* @head: pointer to pointer of the first node
* Return: nothing
*/
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
