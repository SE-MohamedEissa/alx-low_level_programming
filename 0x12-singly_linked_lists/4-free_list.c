#include "lists.h"

/**
 * free_list - free list
 * @head: first element of the list
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *nex;

	while (head)
	{
		nex = head->next;
		free(head->str);
		free(head);
		head = nex;
	}
}
