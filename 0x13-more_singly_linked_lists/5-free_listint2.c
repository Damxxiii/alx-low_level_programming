#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * and sets the head to NULL
 * @head: ptr to first node
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL || *head == NULL)
		return;
	while ((*head)->next != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	free(*head);
	*head = NULL;

}
