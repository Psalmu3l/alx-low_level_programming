#include "lists.h"

/**
 * listint_len - a function that returns the number of elements
 * in a linked listint_t list.
 * @h: Pointer to the list
 * Return: number of nodes.
 **/

size_t listint_len(const listint_t *h)
{
	const listint_t *node = h;
	size_t arrow = 0;

	while (node)
	{
		arrow++;
		node = node->next;
	}
	return (arrow);
}
