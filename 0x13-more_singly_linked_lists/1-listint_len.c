#include "lists.h"

/**
 * listint_len - function that returns the number of
 * elements in a linked listint_t list.
 * @h: head pointer
 * Return: no of list elements
 */
size_t listint_len(const listint_t *h)
{
	unsigned int i = 0;

	if (h == NULL)
		return (0);
	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
