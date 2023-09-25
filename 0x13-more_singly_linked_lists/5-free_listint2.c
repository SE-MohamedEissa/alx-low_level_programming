#include "lists.h"

/**
 * free_listint2 - free list
 * @head: first element of the list
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *nex;

	if (!head)
		return;
	while (*head)
	{
		nex = (*head)->next;
		free(*head);
		*head = nex;
	}
	*head = NULL;
}

