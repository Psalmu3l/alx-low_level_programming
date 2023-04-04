#include "lists.h"

/**
 * free_listint - A function that frees a listint_t list.
 * @head: Pointer to the first element of the list
 **/

void free_listint(listint_t *head)
{
	listint_t *main_node;
	listint_t *next_node;

	if (head)
	{
		main_node = head;
		next_node = head->next;

		while (next_node)
		{
			free(main_node);
			main_node = next_node;
			next_node = next_node->next;
		}
		free(main_node);
	}
}
