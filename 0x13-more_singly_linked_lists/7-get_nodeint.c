#include "main.h"

/**
 * get_nodeint_at_index - return the nth node
 * @head: head of list
 * @index: the index of node
 * Return: node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int i = 0;

	while (i++ < index && node)
		node = node->next;
	if (!node)
		return (NULL);
	return (node);
}
