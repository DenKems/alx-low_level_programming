#include "lists.h"

/**
* pop_listint - function deletes the head node of a listint_t linked list,
* and returns the head node’s data (n)
* @head: pointer to pointer of the first node
* Return: return head node's data or 0
*/
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;
	data = temp->n;
	*head = temp->next;

	free(temp);
	temp = NULL;

	return (data);
}
