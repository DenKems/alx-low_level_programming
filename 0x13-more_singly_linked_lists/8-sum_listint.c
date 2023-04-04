#include "lists.h"

/**
* sum_listint - function  returns the sum of all the data (n)
* of a listint_t linked list
* @head: pointer to the first node
* Return: returns sum of all data or 0
*/
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr = head;

	if (ptr == NULL)
		return (0);

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	return (sum);
}
