#include "lists.h"

/**
 * print_listint - print element from list
 * @h: header of list
 * Return: number of elements in the list
 */

size_t print_listint(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		printf("%d\n",h->n);
		h = h->next;
		len++;
	}
	return (len);
}
