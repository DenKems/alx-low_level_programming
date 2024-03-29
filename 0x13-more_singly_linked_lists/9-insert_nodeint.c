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

	if (idx == 0)
	{
		temp->next = *head;
		*head = temp;
		return (temp);
	}


	for (i = 0; ptr && i < idx; i++)
	{
		if (i == idx - 1)
		{
			temp->next = ptr->next;
			ptr->next = temp;
			return (temp);
		}
		else
			ptr = ptr->next;
	}
	return (NULL);
}
