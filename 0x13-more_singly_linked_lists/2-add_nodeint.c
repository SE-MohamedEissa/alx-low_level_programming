#include "lists.h"

/**
 * add_nodeint - create new node at first
 * @head: head of list
 * @n: the number
 * Return: address of head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = (listint_t *) malloc(sizeof(listint_t));
	unsigned int i = 0;

	if (!new)
		return (NULL);
	new->n = n;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
