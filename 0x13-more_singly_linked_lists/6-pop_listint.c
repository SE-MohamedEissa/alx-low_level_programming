#include "lists.h"

/**
 * pop_listint - revome head of list
 * @head: head of list
 * Return: data of removed node
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *cur;

	if (!head || !*head)
		return (0);
	temp = (*head)->next;
	data = (*head)->n;
	free(*head);
	*head = temp;
	return (data);
}
