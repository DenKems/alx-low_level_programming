#include "lists.h"

/**
* delete_nodeint_at_index - function deletes the node at index index
* of a listint_t linked list
* @head: pointer to pointer of the first node
* @index: the nth node to delete
* Return: returns 1 or -1
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev = *head;
	listint_t *cur = *head;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = cur->next;
		free(cur);
		return (1);
	}

	i = 1;
	while (i <= index)
	{
		prev = cur;
		cur = cur->next;
		i++;
	}
	prev->next = cur->next;

	free(cur);

	return (1);
}
