#include "lists.h"

/**
 * get_nodeint - A function that returns the nth node
 * of a listint_t list.
 * @head: Pointer to the first element of the list.
 * @index: nth node.
 * Return: nth node, if the node doesn't exist, return NULL.
 **/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int array = 0;

	while (node && array != index)
	{
		array++;
		node = node->next;
	}

	if (node && array == index)
	{
		return (node);
	}
	else
	return (NULL);
}
