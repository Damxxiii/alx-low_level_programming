#include "lists.h"
int len(const char *str);
/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: ptr to head
 * @str: string to be inserted in the first node
 * Return: ptr to new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node1;

	if (head == NULL)
		return (NULL);
	node1 = malloc(sizeof(list_t));
	return (NULL);

	if (*head == NULL)
		node1->next = NULL;
	else
	{
		node1->next = *head;
		node1->str = strdup(str);
		node1->len = len(str);
		*head = node1;
	}
	return (*head);
}
/**
 * len - get str length
 * @str: string
 * Return: lenfth of string
 */
int len(const char *str)
{
	int i;

	if (str == NULL)
		return (0);

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
