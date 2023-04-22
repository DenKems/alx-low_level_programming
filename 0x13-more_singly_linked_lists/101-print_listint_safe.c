#include "lists.h"

size_t loop_listint_num(const listint_t *head);
size_t print_listint_safe(const listint_t *head);
/**
 * loop_listint_num - determines the number of nodes in the list
 * @head: A pointer to the head of the listint_t to count
 *
 * Return: returns number of nodes or 0
 */
size_t loop_listint_num(const listint_t *head)
{
	const listint_t *first, *second;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		exit(98);
	first = head->next;
	second = (head->next)->next;
	while (second)
	{
		if (first == second)
		{
			first = head;
			while (first != second)
			{
				nodes++;
				first = first->next;
				second = second->next;
			}
			first = first->next;
			while (first != second)
			{
				nodes++;
				first = first->next;
			}
			return (nodes);
		}
		first = first->next;
		second = (second->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - function prints listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: returns the number of nodes in list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, count = 0;

	nodes = loop_listint_num(head);
	if (nodes == 0)
	{
		for (; head != NULL; count++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (count = 0; count < nodes; count++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}

