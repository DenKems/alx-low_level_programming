#include "lists.h"

/**
* print_listint - function prints all the elements of a listint_t list
* @h: pointer to the first node of linked list
* @next: variable in the listint_t data structure
* @n: variable that contains the elements of a listint_t list
* Return: returns the number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
