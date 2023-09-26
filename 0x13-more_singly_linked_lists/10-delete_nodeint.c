#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node at index
 * @head: ponter to head node
 * @index: index to delete
 * Return: 1 if success -1 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp = *head;
	listint_t *cur = NULL;

	if (!head || !*head)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	for (i = 0; i < index - 1 && temp && temp->next; ++i)
		temp = temp->next;

	if (!temp || !temp->next)
		return (-1);

	cur = temp->next;
	temp->next = cur->next;
	free(cur);

	return (1);
}
