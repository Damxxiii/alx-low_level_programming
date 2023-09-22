#include "lists.h"

/**
 * list_len - function that returns the number of
 * elements in a linked list_t list.
 * @h: pointer to the node
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	int i;

	if (h == NULL)
		return (0);

	for (i = 1; h->next != NULL; i++)
		h = h->next;
	return (i);
}
