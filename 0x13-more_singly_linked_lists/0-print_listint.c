#include "lists.h"

/**
* print_listint - function prints all the elements of a listint_t list
* @h: pointer to the first node of linked list
* Return: returns the number of nodes
*/
size_t print_listint(const listint_t *h)
{
	int count = 0;
	const listint_t *ptr;

	ptr = h;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		count++;
		ptr = ptr->next;
	}

	return (count);
}
