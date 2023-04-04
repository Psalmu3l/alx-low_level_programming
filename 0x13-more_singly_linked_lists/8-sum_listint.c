#include "lists.h"

/**
 * sum_listint - A function that returns the sum of all the data (n)
 *  of a listint_t list.
 * @head: pointer to the first element of the list
 * Return: sum of all data in the list, 0 if the lost is empty.
 **/

int sum_listint(listint_t *head)
{
	listint_t *node = head;
	int plus = 0;

	while (node)
	{
		plus += node->n;
		node = node->next;
	}

	return (plus);
}
