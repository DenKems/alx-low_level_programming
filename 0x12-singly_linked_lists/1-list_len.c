#include "lists.h"

/**
* list_len - function  returns the number of elements in a linked list_t list
* @h: pointer to linked list
* Return: returns number of elements in link list
*/
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *ptr = h;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}

	return (count);
}
