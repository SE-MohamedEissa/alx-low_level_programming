#include "lists.h"

/**
 * sum_listint - sum all data in list
 * @head: head of the list
 * Return: sum of elements in list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if(!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head ->next;
	}
	return (sum);
}
