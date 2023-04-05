#include "lists.h"

/**
* print_listint - function prints all the elements of a listint_t list
* @h: pointer to the first node of linked list
* Return: returns the number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%lu\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
