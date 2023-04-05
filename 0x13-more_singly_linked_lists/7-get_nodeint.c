#include "lists.h"

/**
* get_nodeint_at_index - function returns the nth node
* of a listint_t linked list
* @head: pointer to the first node
* @index: The nth node to return. Index starts from 0
* Return: address of the nth node or NULL, if node doesn't exist
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *ptr = head;

	for (i = 1; ptr && i <= index; i++)
	{
		ptr = ptr->next;
	}

	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
