#include "lists.h"

/**
* insert_nodeint_at_index - function  inserts a new node at a given position
* @head: pointer to pointer to the first node
* @idx: index to insert the new node. Index satrts with 0
* @n: data to store in new node
* Return: returns address of new node or NULL
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp = malloc(sizeof(listint_t));
	listint_t *ptr = *head;

	if (!temp || !head)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	for (i = 1; i < idx; i++)
	{
		ptr = ptr->next;
	}

	temp->next = ptr->next;
	ptr->next = temp;

	return (temp);
}
