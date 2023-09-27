#include "lists.h"
/**
 * start_new_node - new node
 * @n: new input
 * Return: ptr to new node
 */
listint_t *start_new_node(int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	return (new_node);
}

/**
 * insert_nodeint_at_index - function that inserts a
 * new node at a given position.
 * @head: ptr to the first element
 * @idx: index position of new node
 * @n: new input
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	size_t i;
	listint_t *tmp;
	listint_t *tmp_1;
	listint_t *new_node;

	tmp = *head;
	if (head == NULL)
		return (NULL);
	new_node = start_new_node(n);
	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	if (idx == 0)
		*head = new_node;
	for (i = 0; i < idx - 1 && tmp != NULL && idx != 0; i++)
		tmp = tmp->next;
	if (tmp == NULL)
		return (NULL);
	if (idx == 0)
		new_node->next = tmp;
	else
	{
		tmp_1 = tmp->next;
		tmp->next = new_node;
		new_node->next = tmp_1;
	}
	return (new_node);
}
