#include "lists.h"

/**
 * reverse_listint - A function that reverses a listint_t list.
 * @head: pointer to the first element of the list.
 * Return: pointer to the first node of the reversed list
 **/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous_node, *next_node;

	if (!head)
		return (NULL);

	previous_node = NULL;
	while (*head)
	{
		next_node = (*head)->next;
		(*head)->next = previous_node;
		previous_node = *head;
		*head = next_node;
	}
	*head = previous_node;
	return (*head);
}
