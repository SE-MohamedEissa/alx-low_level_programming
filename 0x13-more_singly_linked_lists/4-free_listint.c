#include "lists.h"

/**
 * free_listint - free list
 * @head: first element of the list
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *nex;

	while (head)
	{
		nex = head->next;
		free(head);
		head = nex;
	}
}
