#include "lists.h"

/**
 * free_listint2 - A function that frees a listint_t list
 * this function sets the head to NULL.
 * @head: Pointer to the dirst element of the list
 **/

void free_listint2(listint_t **head)
{
	listint_t *main_node;
	listint_t *next_node;

	if (!head)
		return;

	main_node = *head;
	next_node = (*head)->next;

	while (next_node)
	{
		free(main_node);
		main_node = next_node;
		next_node = next_node->next;
	}
	free(main_node);
	*head = NULL;
}
