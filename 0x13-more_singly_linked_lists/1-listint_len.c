#include "lists.h"

/**
* listint_len - function returns the number of elements
* in a linked listint_t list
* @h: pointer to the first node of linked list
* Return: returns number of nodes in linked list
*/
size_t listint_len(const listint_t *h)
{
	int count = 0;
	const listint_t *ptr;

	ptr = h;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}

	return (count);
}
