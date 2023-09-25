#include "lists.h"

/**
 * insert_nodeint_at_index - inserts node at index
 * @head: pointer to head node
 * @idx: index to add data to
 * @n: data
 * Return: address of new code NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new = malloc(sizeof(listint_t));

	if (!new || !head)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i; *head && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = (*head)->next;
			(*head)->next = new;
			return (new);
		}
		*head = (*head)->next;
	}
	return (NULL);
}
