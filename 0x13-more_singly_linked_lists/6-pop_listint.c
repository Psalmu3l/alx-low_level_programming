#include "lists.h"

/**
 * pop_listint - A function that deletes the head
 * of a listint_t list.
 * @head: Pointer to the first element of the list.
 * Return: head nodes data (n).
 **/

int pop_listint(listint_t **head)
{
	int data_details;
	listint_t *first_node = *head;

	if (!first_node)
		return (0);

	data_details = (*head)->n;
	*head = first_node->next;
	free (first_node);
	return (data_details);
}
